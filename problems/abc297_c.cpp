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

void solve(){
	int h,w;
	cin>> h>>w;
	vector<string> result;
	for(int i =1;i<=h;i++){
		string s;
		cin>> s;
		for(int i =0;i<w-1;i++){
			if(s[i]=='T' && s[i+1]=='T'){
				s[i] ='P';
				s[i+1]='C';
			}
		}
		result.push_back(s);
	}
	for(string item: result) cout<< item<<endl;
}
 
int main() {
    solve();
    return 0;
}
