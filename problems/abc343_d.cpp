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
using mint = modint998244353;

void solve(){
	int n,t;
	cin>> n >> t;
	set<long long> st;
	vector<long long> a(n);
	map<long long,int> mp;
	int count=0;
	st.insert(0);
	mp[0]= n;
	for(int i =0;i< t;i++){
		int index;
		long long value;
		cin>> index >> value;
		long long temp = a[index-1];
		mp[temp]--;
		a[index-1]+=value;
		mp[a[index-1]]++;
		if(mp[temp]==0){
			st.erase(temp);
		}
		if(st.find(a[index-1])==st.end()){
			st.insert(a[index-1]);
		}
		cout<<st.size()<<endl;

	}
}
 
int main() {
    solve();
    return 0;
}
