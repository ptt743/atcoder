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
	cin>> n;
	string s;
	cin>> s;
	int right = 0, left = 0;
	int count = 0;
	vector<int> a(26);
	for(;right<=n;right++){
		
		if(right ==n || s[left]!=s[right]){
			a[s[left]-'a']= max(a[s[left]-'a'],(right- left));
			left = right;
			
		}
	}
	for(int i =0;i<26;i++) count+=a[i];
	cout<< count<<endl;
}
 
int main() {
    solve();
    return 0;
}
