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
	int n;
  string s;
  cin>> n;
  cin>> s;
  string temp;
  for(int i =0;i< n;i++){
    if(temp.size()==0 && (s[i]== '*'|| s[i]=='|')) temp+=s[i];
    else if(s[i]=='*' || s[i]=='|'){
      int n = temp.size();
      if(temp[n-1]!=s[i]) temp+=s[i];
    }
  }
  bool flag = false;
  for(int i=0;i< temp.size();i++){
    if(temp[i]=='*' &&i >0 && i< (temp.size()-1)){
      if(temp[i-1]=='|' && temp[i+1]=='|') flag = true;
    }
  }
  if(flag)cout<<"in"<<endl;
  else cout<<"out"<<endl;
}
 
int main() {
    solve();
    return 0;
}
