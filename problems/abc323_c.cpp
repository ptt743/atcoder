#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<set>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n, m;
	cin>> n >> m;
	vector<int> a(m);
	for(int i =0;i<m;i++) cin>> a[i];
	vector<string> b(n);
	vector<int> c(n);
	int max_value = 0;
	for(int i =0;i< n;i++){
		cin>> b[i];
		int count  = i +1;
		for(int j =0;j< m;j++){
			if(b[i][j]=='o') count += a[j];
		}
		c[i] = count;
		max_value = max(max_value, count);
	}
	for(int i =0;i< n;i++){
		if(c[i]==max_value) cout<<"0"<<endl;
		else {
			multiset<int> st;
			int count =0;
			for(int j =0;j< m;j++){
				if(b[i][j]=='x') st.insert(a[j]);
			}
			while(c[i]<max_value){
				int value = *st.rbegin();
				st.erase(--st.end());
				c[i]+=value;
				count++;
			}
			cout<< count<<endl;

		}
	}
}
 
int main() {
    solve();
    return 0;
}
