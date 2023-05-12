#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//

void solve(){
 int h,w;
 cin>>h>>w;
 vector<pair<int,int>> a;
 set<pair<int,int>> b;
 for( int i =1;i<=h;i++){
   for(int j =1;j<=w;j++){
     char temp;
     cin>> temp;
     if(temp=='#'){
       a.push_back(make_pair(i,j));
     }
   }
 }
 for(int i=1;i<=h;i++){
   for(int j =1;j<=w;j++){
     char temp ;
     cin>> temp;
     if(temp=='#')
       b.insert(make_pair(i,j));
   }
 }
 if(a.size()!=b.size()){
   cout<<"No"<<endl;
   return ;
 }
 for(int i =1;i<= h;i++){
   for(int j =1;j<=w;j++){
     bool check = true;
     for(int k=0;k<a.size();k++){
       int r = a[k].first - i;
       int c = a[k].second - j;
       if(r<=0)r+=h;
       if(c<=0)c+=w;
        if(b.find(make_pair(r,c))==b.end()){
          check = false;
        }
     }
     if(check== true){
       cout<<"Yes"<<endl;
       return ;
     }
   }
 }
 cout<<"No"<<endl;


}
 
int main() {
    solve();
    return 0;
}
