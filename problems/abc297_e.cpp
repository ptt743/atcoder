#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
#define ll long long
void solve(){
	int n , k;
	cin>> n>>k;
	vector<int> a;
	for(int i =0;i< n;i++){
		long long t;
		 cin>> t;
		a.push_back(t);
	}
	priority_queue< ll , vector<ll> , greater<ll> > q;
	q.push(0) ;
	map< ll , bool> vis ;
	while (!q.empty()) {
		ll s =q.top();
		q.pop();
        	if(vis[s]) continue;
		if(!k){ 
			cout << s<<endl;
			return ;
		}
        	k--;
		vis[s] = 1;
		for(int i =0 ; i < n; i++)
		{
		    s += a[i] ;
		    if(!vis[s])
		    {
			q.push(s) ;
		    }
		    s -= a[i] ;
		}
	}
}
 
int main() {
    solve();
    return 0;
}
