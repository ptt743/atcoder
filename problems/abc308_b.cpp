#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<unordered_map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n, m;
   cin>> n>> m;
   vector<string> c(n);
   vector<string> d(m);
   unordered_map<string,int> mp;
   for(int i =0;i< n;i++) cin>> c[i];
   for(int i=0;i< m;i++) cin>>d[i];
   for(int i =0;i<m+1;i++){
     int t;
     cin>> t;
     if(i!=0){
        mp[d[i-1]] = t;
     } else {
       mp["c"]= t;
     }
   }
   int ans = 0;
   for(int i =0;i< n;i++){
     if(mp.find(c[i])==mp.end()) ans+=mp["c"];
     else ans += mp[c[i]];
   }
   cout<<ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
