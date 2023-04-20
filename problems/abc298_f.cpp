#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//

void solve(){
	int n ;
	long long r,c,x;
	cin>> n;
	map<long long, long long> mpc;
	map<long long, long long> mpr;
	map<pair<long long, long long>, long long> mp;
	map<long long, vector<long long>> pr;
	multiset<long long > st;
	for(int i =0;i< n;i++){
		cin>>r>>c>>x;
		mpr[r]+=x;
		mpc[c]+=x;
		mp[make_pair(r,c)] = x;
		pr[r].push_back(c);
	}
	for(auto it: mpc){
		st.insert(it.second);
	}
	long long res = 0;
	for(auto item: mpr){
		for(auto edge : pr[item.first]){
			auto it = st.find(mpc[edge]);
			st.erase(it);
			st.insert(mpc[edge] - mp[make_pair(item.first, edge)]);
		}
		res = max(res,item.second + *prev(st.end()));
                for(auto edge :pr[item.first]){
			st.insert(mpc[edge]);
			auto it = st.find(mpc[edge] - mp[make_pair(item.first, edge)]);
			st.erase(it);
		}
	}
	cout<<res<<endl;
}
 
int main() {
    solve();
    return 0;
}
