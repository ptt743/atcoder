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
void rc(int count , vector<string> & result, vector<string> source, bool& flag, vector<bool> visited){
  if(count==source.size()){
    bool check = true;
    for(int i =0; i< result.size()-1;i++){
      int count = 0;
      for(int j=0;j<result[0].size();j++){
        if(result[i][j] != result[i+1][j]) count++;
      }
      if(count!=1) check = false;
    }
    if(check) flag = true;
  }
  for(int i =0;i<source.size() ;i++){
    if(visited[i]) continue;
    result.push_back(source[i]);
    visited[i] = true;
    rc(count+1, result,source, flag, visited);
    result.pop_back();
    visited[i] = false;
  }
}
void solve(){
	int n, m;
  cin>> n>>m;
  vector<string> s(n);
  for(string &item: s) cin>> item;
  vector<string> result;
  bool flag = false;
  vector<bool> visited(n,false);
  rc(0,result,s,flag,visited);
  if(flag) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

}
 
int main() {
    solve();
    return 0;
}
