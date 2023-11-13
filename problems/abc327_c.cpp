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

void solve(){
	int a[9][9];
	int b[9];
	bool flag=true;
	for(int i=0;i<9;i++)for(int j=0;j<9;j++)cin>>a[i][j];
	for(int i=0;i<9;i++){
        for(int k=0;k<9;k++)b[k]=0;
		for(int j=0;j<9;j++)b[a[i][j]-1]++;
		for(int k=0;k<9;k++)if(b[k]!=1)flag=false;
	}
    for(int j=0;j<9;j++){
        for(int k=0;k<9;k++)b[k]=0;
		for(int i=0;i<9;i++)b[a[i][j]-1]++;
		for(int k=0;k<9;k++)if(b[k]!=1)flag=false;
    }
	for(int i=0;i<9;i+=3){
		for(int j=0;j<9;j+=3){
			for(int k=0;k<9;k++)b[k]=0;
			for(int ii=0;ii<3;ii++){
				for(int jj=0;jj<3;jj++){
					b[a[i+ii][j+jj]-1]++;
				}
			}
			for(int k=0;k<9;k++)if(b[k]!=1)flag=false;
		}
	}
	if(flag)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;

}
 
int main() {
    solve();
    return 0;
}
