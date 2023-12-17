#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	set<string> edges={"AB","BA","BC","CB","CD","DC","DE","ED","AE","EA"};
	string a,b;
	cin>> a >> b;
	bool isedgeA = false, isedgeB = false;
	if(edges.find(a)!=edges.end()) isedgeA = true;
	if(edges.find(b)!=edges.end()) isedgeB = true;
	if(isedgeA == isedgeB) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
