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
using mint = modint998244353;

int n;
string s1,s2;
char ans[10][10];
map<char,char>nxt;
char g(int x){
	for(int i=1;i<=n;i++)if(ans[i][x]!='.')return ans[i][x];
	return '.';
}
bool no(int x){
	int num=0;
	map<char,int>mp;
	for(int i=1;i<=n;i++)mp[ans[i][x]]++;
	return mp['A']==1&&mp['B']==1&&mp['C']==1;
}
void dfs(int x){
	if(x==n+1){
		for(int i=1;i<=n;i++)if(g(i)!=s2[i-1]||!no(i))return;
		cout<<"Yes"<<endl;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<ans[i][j];
			}
			cout<<endl;
		}
		exit(0);
	}
	char c1=s1[x-1],c2=nxt[s1[x-1]],c3=nxt[nxt[s1[x-1]]];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=i+1;k<=n;k++){
				if(j==k)continue;
				ans[x][i]=c1,ans[x][j]=c2,ans[x][k]=c3,dfs(x+1),ans[x][i]=ans[x][j]=ans[x][k]='.';
			}
		}
	}
}
int main(){
	cin>>n>>s1>>s2;
	nxt['A']='B';nxt['B']='C';nxt['C']='A';
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			ans[i][j]='.';
		}
	}
	dfs(1);
	cout<<"No";
	return 0;
}
