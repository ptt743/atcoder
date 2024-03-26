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
	int w,b; cin>> w >> b;
	string s = "wbwbwwbwbwbw";
	for(int i =0;i< s.size();i++){
		int countw=0, countb=0;
		for(int j =0; j< w+b;j++){
			if(s[(i +j)%s.size()]=='b') countb++;
			else countw++;
		}
		if(countb ==b && countw==w){
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
