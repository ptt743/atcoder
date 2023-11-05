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
	int n;
	long long x,y;
	cin>> n >> x >> y;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	string re = "";
	function<bool (int,int, int, int, string)> bk = [&](int count, int xt, int yt, int dir,string res)-> bool{
		if(count==n){
			if(xt== x && yt ==y){
				re = res;
				return true;
			
			}
			return false;
		}
		if(dir==1 || dir == 2){
			char fi = (dir ==1)?'L':'R';
			char se = (dir==1)?'R':'L';
			return bk(count+1, xt+a[count],yt,3, res + se) || bk(count+1, xt-a[count],yt,4, res + fi);
			
		}
		if(dir==3 || dir ==4){
			char fi = (dir ==3)?'L':'R';
			char se = (dir==3)?'R':'L';
			return bk(count+1, xt,yt + a[count],1, res + fi) || bk(count+1, xt,yt-a[count],2, res + se);
		}
	};
	bool check =  bk(0,0,0,3,"");
	if(check)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	if(check)cout<<re<<endl;
}
 
int main() {
    solve();
    return 0;
}
