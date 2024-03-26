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
	string s; cin>> s;
	vector<int> chars(26);
	int n = s.size();
	int count =0;
	long long result = 0;
	for(int i =n-1;i>=0;i--){
		result += count - chars[s[i]-'a'];
		chars[s[i]-'a']++;
		count++;
	}
	for(int i =0;i<26;i++)
		if(chars[i]>1){
			result++;
			break;
		}
	cout<< result<<endl;
}
 
int main() {
    solve();
    return 0;
}
