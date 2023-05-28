#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<set>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n,m;
  cin>> n>> m;
  set<string> st;
  for(int i =1;i<=n;i++){
    for( int j = i+1;j<=n;j++){
      string temp = to_string(i) + "_" + to_string(j);
      st.insert(temp);
    }
  }
  vector<vector<int>> a(m, vector<int>(n,0));
  for(int i =0;i< m;i++){
    for( int j = 0;j< n;j++){
        cin>> a[i][j];
    }
  }
  for(int i =0;i< m;i++){
    for(int j =0; j< n-1;j++){
      string temp = "";
      if(a[i][j+1]> a[i][j]) temp = to_string(a[i][j]) + "_" + to_string(a[i][j+1]);
      else temp = to_string(a[i][j+1])+"_"+ to_string(a[i][j]);
      if(st.find(temp)!=st.end()){
        st.erase(temp);
      }    
    }
  }
  cout<<st.size()<<endl;
}
 
int main() {
    solve();
    return 0;
}
