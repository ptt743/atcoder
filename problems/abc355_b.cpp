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
	int n,m; 
	cin>> n >> m;
	vector<int> a(n), b(m);
	for(int i=0;i<n;i++) cin>> a[i];
	for(int i =0;i< m;i++) cin>> b[i];
	
	sort(a.begin(),a.end());
	sort(b.begin(), b.end());
	int index1 = 0, index2 =0;
	bool check = false;
	while(index1<n || index2<m){
		if(index1<n && a[index1]<b[index2]){
			index1++;
			if(check == true){
				cout<<"Yes"<<endl;
				return;
			}
			check = true;
		} else{
			index2++;
			check = false;
		}
	}
	cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
