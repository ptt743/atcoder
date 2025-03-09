#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	string s = "     ";
	int a,b,c,d,e;
	cin>> a >> b >> c >> d >> e;
	vector<int> scores = {a,b,c,d,e};
	map<string, bool> visited;
	vector<pair<int,string>> result;
	function<void()> bfs = [&]()->void{
		queue<string> qq;
		qq.push(s);
		visited[s] = true;
		while(!qq.empty()){
			string front = qq.front();
			if(front!="     "){
				string res = "";
				int score = 0;
				for(int i =0;i<5;i++){
					if(front[i]!=' '){
						res +=front[i];
						score+=scores[i];
					}
				}
				result.push_back({score, res});
			}
			qq.pop();
			for(int i =0;i< 5;i++){
				string temp = front;
				temp[i] = ' ';
				if(visited[temp]==false){
					visited[temp] = true;
					qq.push(temp);
				}
				temp = front;
				temp[i] = 'A' + i;
				if(visited[temp]==false){
					visited[temp] = true;
					qq.push(temp);
				}
			}
		}
	};
	bfs();
	sort(result.begin(), result.end(),[](const pair<int, string> &a, const pair<int, string> &b) {
        return a.first > b.first || ( a.first==b.first && a.second < b.second);
    });
	for(pair<int,string> item: result) cout<< item.second <<endl;
}
 
int main() {
    solve();
    return 0;
}
