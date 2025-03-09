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
	int n,m;
	cin>> n >> m;
	vector<vector<int>> ans;
	function<void(vector<int>&)> dfs =[&](vector<int>& temp)->void{
		int size = temp.size();
		if(size==n){
			ans.push_back(temp);
			return;
		}
		for(int i = (size==0)?1:(temp.back()+10);i<= m - 10*(n - (size+1));i++){
			vector<int> nxt = temp;
			nxt.push_back(i);
			dfs(nxt);
		}
	};
	vector<int> temp;
	dfs(temp);
	cout<< ans.size()<<endl;
	for(int i =0;i< ans.size();i++){
		for(int j =0;j<ans[i].size();j++){
			cout<< ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
