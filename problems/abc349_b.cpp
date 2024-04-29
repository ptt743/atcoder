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
	int n = s.size();
	vector<int> chars(26,0);
	for(int i =0;i< n;i++){
		chars[s[i]-'a']+=1;
	}
	sort(chars.begin(), chars.end());
	for(int i =0;i<26;){
		int count=0;
		int num = chars[i];
		while(i < 26 && chars[i]== num) {count++; i++;}
		if(num!=0 && count !=2 ){
			cout<<"No"<<endl;
			return;
		}

	}
	cout<<"Yes"<<endl;
}
 
int main() {
    solve();
    return 0;
}
