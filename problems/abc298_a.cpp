#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
using namespace std;
//*****taipt*****//

void solve(){
	int n;
  string s;
  cin>>n;
  cin>> s;
  map<char,int> mp;
  for(int i =0;i< s.size();i++){
    mp[s[i]]++;
  }
  if(mp['o']<1 || mp['x']>0) {
    cout<<"No"<<endl;
  } else cout<<"Yes"<<endl;
}
 
int main() {
        solve();
    return 0;
}
