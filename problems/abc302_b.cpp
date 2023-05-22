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
  vector<vector<char>> s(h, vector<char>(w));
  for(int i =0;i< h;i++)
    for(int j =0;j<w;j++) cin>>s[i][j];
  vector<vector<pair<int,int>>> d = {
    {{-2,-2},{-1,-1},{0,0},{1,1},{2,2}},
    {{-2,2},{-1,1},{0,0},{1,-1},{2,-2}},
    {{-2,0},{-1,0},{0,0},{1,0},{2,0}},
    {{0,-2},{0,-1},{0,0},{0,1},{0,2}}
  };
  vector<pair<int,int>> result;
  for(int i=0;i<h;i++){
    for(int j =0;j<w;j++){
      if(s[i][j]=='u'){
        for(int k =0;k<4;k++){
          string temp = "";
          vector<pair<int,int>> result;
          for(int l =0;l<5;l++){
              int x = i+ d[k][l].first;
              int y = j + d[k][l].second;
              if(x<0|| x>=h || y<0 || y>=w){break;}
              result.push_back({x,y});
              temp+=s[x][y];
          }
          if(temp=="snuke"|| temp=="ekuns"){
            if(temp=="snuke")
              for(pair<int,int> item: result){
                cout<<item.first+1<<" "<<item.second+1<<endl;
              }
            if(temp=="ekuns"){
              reverse(result.begin(), result.end());
              for(pair<int,int> item: result){
                cout<<item.first+1<<" "<<item.second+1<<endl;
              }
            }
            return;
          }
        }
      }
    }
  }
}
 
int main() {
    solve();
    return 0;
}
