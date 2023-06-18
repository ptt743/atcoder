#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#define N 777

using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;
long long n;int m,sz,tre[N][2],fail[N],sum;bool ban[N];
string s;
void solve(){
  cin>> n>> m;
  for(int j =1;j>=0;j--){
  for(int i =0;i< 20;i++){
    cout<<tre[j][i]<<" ";
  }
  cout<<endl;
  }

	for(int j;m--;)
	{
    string s;
    j=0;
    cin>>s ;
    cout<<"jjjjjjjjj"<<j<<endl;
		for(int i=0;s[i];j=tre[j][s[i++]!='a'])
			if(!tre[j][s[i]!='a']){
        tre[j][s[i]!='a']=++sz;
        cout<<i<<" "<<j<<" "<< s[i] << " "<< tre[j][s[i]!='a']<<endl;
      }
		ban[j]=1;
    cout<<"j"<<j<<endl;
	}	
  for(int j =1;j>=0;j--){
  for(int i =0;i< 20;i++){
    cout<<tre[j][i]<<" ";
  }
  cout<<endl;
  }
}
 
int main() {
    solve();
    return 0;
}
