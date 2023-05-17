#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<unordered_map>
#include <atcoder/all>
#include<set>
using namespace std;
using namespace atcoder;
//*****taipt*****//

void solve(){
  string a,b;
  cin>> a;
  cin>> b;
  unordered_map<char,int>mpa, mpb;
  set<char> st{'a', 't', 'c', 'o', 'd', 'e', 'r'};
  for(int i =0;i< a.size() ; i++) mpa[a[i]]++;
  for(int i=0;i<b.size(); i++) mpb[b[i]]++;
  for(int i =0;i<=25;i++){
    char temp = 'a'+ i;
    if(mpa[temp]< mpb[temp]){
      int add = mpb[temp] - mpa[temp];
      if(mpa['@']>= add && st.find(temp)!=st.end()) mpa['@']-=add;
      else {
        cout<<"No"<<endl;
        return;
      }
    } else if( mpa[temp]> mpb[temp]){
      int add = mpa[temp] - mpb[temp];
      if(mpb['@']>= add && st.find(temp)!=st.end()) mpb['@']-=add;
      else {
        cout<<"No"<<endl;
        return;
      }
    }
  }
  cout<<"Yes"<<endl;
}
 
int main() {
    solve();
    return 0;
}
