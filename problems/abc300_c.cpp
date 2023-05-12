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

void solve(){
 int h,w;
 cin>> h>>w;
 int n  = min(h,w);
 vector<vector<char>> a(h+2, vector<char>(w+2,'.'));
 for(int i =1;i<=h;i++){
  for(int j=1;j<=w;j++){
    cin>>a[i][j];
  }
 }
 vector<int> ans(n+1);
 for(int i =1;i<=h;i++){
   for( int j =1;j<=w;j++){
     if(a[i][j]=='#'){
       int d = 1;
       bool check = true;
       while(d<=n && check){
         if(a[i+d][j+d]=='#' && a[i+d][j-d]=='#' && a[i-d][j+d]=='#' && a[i-d][j-d]=='#'){d++;continue;}
          if(a[i+d][j+d]=='#' || a[i+d][j-d]=='#' || a[i-d][j+d]=='#' || a[i-d][j-d]=='#'){ check= false; break;}
          break;
       }
      if(check) ans[d-1]++;
     }
   }
 }
 for(int i =1;i<=n;i++){
   cout<<ans[i]<<" ";
 }
 cout<<endl;
} 
int main() {
    solve();
    return 0;
}
