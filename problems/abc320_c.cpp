#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<set>
#include<map>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int m ;
	cin>> m;
	string s1,s2,s3;
	cin>> s1 >> s2 >> s3;
	int ans = 1e9;
	for(int i =0;i< m;i++)
		for( int j =0;j< m;j++)
			for(int k =0;k< m;k++){
				if(s1[i]==s2[j] && s1[i] == s3[k]){
					if( i==j && j ==k) ans = min( ans, 2*m +i);
					else if (i==j || i ==k || k== j) ans  = min( ans, m + min(i,min(j,k)));
					else ans = min(ans, max(i,max(j,k)));
				}
			}
	if(ans==1e9) { cout<<"-1"<<endl; return;}
	cout<< ans<< endl;

}
 
int main() {
    solve();
    return 0;
}
