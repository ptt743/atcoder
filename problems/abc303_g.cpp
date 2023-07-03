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
long long n;int m,sz,tre[N][2],fail[N],sum;char s[9];bool ban[N];
void solve(){
	long long n;
	int m ;
	cin>> n>> m;
	while(m--){
		string s;
		cin>> s;
		int j =0;
		for(int i=0; s[i];j=tre[j][s[i++]!='a']){
			if(!tre[j][s[i]!='a'])tre[j][s[i]!='a']=++sz;
			cout<<s<<" "<<j<<endl;
		}
		ban[j]=1;
		cout<<"j "<< j<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
