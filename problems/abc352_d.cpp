#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <climits>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n ,k; cin>> n >> k;
	vector<int> p(n+1,0);
	vector<pair<int,int>> a;
	for(int i =1;i<=n;i++){
		cin>> p[i];
		a.push_back(make_pair(p[i],i));
	}
	sort(a.begin(), a.end());
	std::priority_queue<int, std::vector<int>, std::greater<int>> qq_asc;
	std::priority_queue<int, std::vector<int>, std::less<int>> qq_desc;
        std::priority_queue<int, std::vector<int>, std::greater<int>> qq1;
	std::priority_queue<int, std::vector<int>, std::less<int>> qq2;


	int left = 0;
	int ans = INT_MAX;
	for(int right = 0; right< n;right++){
		qq_desc.push(a[right].second);
		qq_asc.push(a[right].second);
		if(right>=k-1){
			int top = qq_desc.top();
			int bot = qq_asc.top();
			ans = min(ans,top - bot );
			qq1.push(a[left].second);
			qq2.push(a[left].second);
			left++;

		}
		while(qq1.size()>0 && qq1.top() == qq_asc.top()) {qq_asc.pop(); qq1.pop();}
		while(qq2.size()>0 && qq2.top() == qq_desc.top()){ qq_desc.pop(); qq2.pop();}
	}
	cout<< ans<<endl;

	
}
 
int main() {
    solve();
    return 0;
}
