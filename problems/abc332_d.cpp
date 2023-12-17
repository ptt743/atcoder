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
const int inf = 1000000000;


void solve(){
	int w,h;
	cin >> h >> w;
	vector<vector<long long>> a(h+1, vector<long long>(w+1));
	vector<vector<long long>> b(h+1, vector<long long>(w+1));
	for(int i =1;i<= h;i++) for(int j =1;j<=w;j++) cin>> a[i][j];
	for(int i =1;i<= h;i++) for(int j =1;j<=w;j++) cin>> b[i][j];

	int p[6], q[6];
  	for(int i = 1; i <= h; i++) p[i] = i;
  	for(int i = 1; i <= w; i++) q[i] = i;

	int ans = inf;
	do{
		do{
			bool match = true;
			for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++){
        			if(a[p[i]][q[j]] != b[i][j]) match = false;
      			}
			if(!match) continue;
			int pinv = 0, qinv = 0;
			for(int i = 1; i <= h; i++) for(int j = 1; j <= h; j++) if(i < j && p[i] > p[j]) pinv++;
      			for(int i = 1; i <= w; i++) for(int j = 1; j <= w; j++) if(i < j && q[i] > q[j]) qinv++;		
			ans = min(ans, pinv + qinv);
		}while(next_permutation(q+1, q+w+1));
	}while(next_permutation(p+1, p+h+1));

	if(ans == inf) {
		cout<<"-1"<<endl;
		return;
	}
	cout<< ans << endl;
	
}
 
int main() {
    solve();
    return 0;
}
