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
	int n,m,h,k;
  cin>> n>>m>>h>>k;
  string s;
  cin>> s;
  set<pair<int,int>> st;
  for(int i =0;i< m;i++){
    int x, y;
    cin>> x>> y;
    st.insert(make_pair(x,y));
  }
  int x = 0, y=0;
   stack<int> sta;
  for(int i =0;i< s.size();i++){
      if(s[i]=='R') x+=1;
      else if(s[i]=='L') x-=1;
      else if(s[i]=='U') y+=1;
      else y-=1;
      h--;
      if(h<0){
       cout<<"No"<<endl;
       return;
      }
      
      if(h<k && st.find(make_pair(x,y))!=st.end()){
        h=k;
        st.erase({x, y});

      }

      
  }
  cout<<"Yes"<<endl;

}
 
int main() {
    solve();
    return 0;
}
