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
	int n ;
  cin>> n;
  vector<int> a(n+1);
  for(int i =1;i<=n;i++) cin>> a[i];
  string s;
  cin>> s;
  vector<vector<int>> left(n+2, vector<int>(3,0));
  vector<vector<int>> right(n+2, vector<int>(3,0));
  for(int i =1;i<=n;i++){
	left[i] = left[i-1];
	if(s[i-1]=='M') left[i][a[i]]++;
  }
  for(int i = n;i>0;i--){
  	right[i] = right[i+1];
	if(s[i-1]=='X') right[i][a[i]]++;
  }
  long long ans = 0;
  function<int(int,int,int)> check = [&](int i, int j, int k)-> int{
  	for(int t =0;t<3;t++){
		if(i!=t && j!=t && k!=t) return t;
	}
	return 3;
  };
  for(int i =1;i<n;i++){
	  if(s[i-1]!='E') continue;
  	for(int j=0;j<3;j++){
		for(int k =0;k< 3;k++){
			ans += 1ll*left[i-1][j]*right[i+1][k]*(check(j,k,a[i]));	
		}
	}
  }
  cout<<ans<<endl;
  
}
 
int main() {
    solve();
    return 0;
}
