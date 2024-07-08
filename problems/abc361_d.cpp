#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n; cin>> n;
	string s, t;
	cin>> s;
	cin>> t;
	long long state = 0;
	for(int i =0;i< n;i++){
		if(s[i]=='W'){
			state += (1ll<<i);
		}
	}
	n+=2;
	vector<vector<int>> ans = vector<vector<int>> (1<<n, vector<int>(n,0));
	vector<vector<bool>> visited = vector<vector<bool>> (1<<n, vector<bool>(n,false));
	queue<pair<long long, int>> qq;
	qq.push(make_pair(state, n-2));
	visited[state][n-2]= true;
	while(!qq.empty()){
		pair<long long, int> front = qq.front();
		qq.pop();
		int n1 = front.second; int n2 = n1+1;
		for(int i = 0;i< n-1;i++){
			int j = i +1;
			if(i!=n1 && j!=n2 && i!=n2 && j!=n1){
		                long long temp = front.first;
				if((front.first>> i) &1)
					temp= temp - (1ll<<i) + (1ll<<n1);
				if((front.first>>j) & 1)
					temp= temp - (1ll<<j) + (1ll<<n2);
				if(!visited[temp][i]){
					visited[temp][i] = true;
					qq.push(make_pair(temp, i));
					ans[temp][i] = ans[front.first][front.second] +1;
				}
			}
		}
	}
	long long tempT = 0;
	for(int i =0;i< t.size();i++){
		if(t[i]=='W') tempT+=(1ll<<i);
	}
	if(visited[tempT][n-2]){
		cout<< ans[tempT][n-2]<<endl;
	} else cout<<"-1"<<endl;
}
 
int main() {
    solve();
    return 0;
}
