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
	priority_queue<long long> pq;
	for(int i =0;i< n;i++){
		int t; cin>> t;
		pq.push(t);
	}
	vector<long long> b(n-1);
	for(int i =0;i< n-1;i++){
		cin>> b[i];
	}
	sort(b.begin(), b.end());
	int right = n-2;
	int count = 0;
	int ans = 0;
	while(right>=0){
		if(b[right]>= pq.top()){
			right--;
		} else {
			count++;
			ans = pq.top();
		}
		pq.pop();
		if(count>=2) break;
	}
	if(count ==0 ) ans = pq.top();
	if(count>=2) cout<<"-1"<<endl;
	else cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
