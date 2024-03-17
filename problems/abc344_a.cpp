#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	string s;
	cin>> s;
	string result ="";
	int count = 0;
	for(int i =0;i< s.size();i++){
		if(s[i]=='|'){
			count++;
			continue;
		}
		if(count==0 || count ==2) result+=s[i];
	}
	cout<< result << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
