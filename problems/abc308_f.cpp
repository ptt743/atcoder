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
	int n, m;
	 cin>> n>> m;
	 multiset<long long> p;
	 long long ans = 0;
	 for(int i =0;i< n;i++){
		long long temp;
		cin>> temp;
		p.insert(temp);
		ans+= temp;
	 }
	 vector<pair<long long, long long>> dl;
         vector<long long> l(m);
	 for(int i =0;i< m;i++){
		 cin>> l[i];
	 }
	 for(int i =0;i< m;i++){
		long long d;
		cin>> d;
	 	dl.push_back(make_pair(d,l[i]));
	 }
	 sort(dl.begin(), dl.end());
	 
	 for(int i =m-1;i>=0;i--){
		auto it  = p.lower_bound(dl[i].second);
		if(it !=p.end()){
			ans -= dl[i].first;
			p.erase(it);
		}
	 }
	 cout<<ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
