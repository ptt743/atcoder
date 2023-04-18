#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<set>
using namespace std;
//*****taipt*****//

void solve(){
	int n,q;
  cin>> n>>q;
  vector<map<int,int>> a(n+1);
  map<int,set<int>> c;
  while(q--){
    int t,i,j;
    cin>> t;
    if(t==1){
      cin>> i>> j;
      a[j][i]++;
      c[i].insert(j);
    } else if (t==2){
      cin>>i;
      for(auto it: a[i]){
        for(int k=0;k<it.second;k++) cout<<it.first<<" ";
      }
      cout<<endl;
    } else {
      cin>> i;
      for(auto it: c[i]){
        cout<<it<<" ";
      }
      cout<<endl;
    }
  }
}
 
int main() {
    solve();
    return 0;
}
