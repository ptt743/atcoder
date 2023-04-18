#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
using namespace std;
//*****taipt*****//

void solve(){
	int n;
  cin>>n;
  vector<vector<int>> b(n+1, vector<int>(n+1));
  vector<pair<int,int>> a;
  for(int i =1;i<=n;i++){
    for( int j =1;j<=n;j++){
      int t;
      cin>> t;
      if(t==1)a.push_back(make_pair(i,j));
    }
  }
  for(int i =1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>> b[i][j];
    }
  }
  for(int i=1;i<=4;i++){
    int ok = true;
    for(int j=0;j< a.size();j++){
      int x = n+1 - a[j].second;
      int y = a[j].first;
      a[j] = make_pair(x,y);
      if(b[x][y]==0) ok = false;
    }
    if(ok){
      cout<<"Yes"<<endl;
      return;
    }
  }
  cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
