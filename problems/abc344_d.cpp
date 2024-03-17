#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
define 
//*****taipt*****//
using mint = modint998244353;

long long calc(int n){
	long long result = 1;
	for(int i =1;i<=n;i++) result *=31;
	return result;
}

void solve(){
	string t;cin>> t;
	int n;cin>> n;
	vector<vector<string>> a(n, vector<string>());
	vector<long long> strs;
	long long temp = 0;
	strs.push_back(temp);
	vector<string> strings;
	long long coef = 1;
	string temp2 = "";
	strings.push_back(temp2);
	for(int i =0;i<t.size();i++){
		temp+=(t[i]-'a')*coef;
		temp2+=t[i];
		coef*=31;
		strs.push_back(temp);
		strings.push_back(temp2);
	}
	vector<int> si(t.size()+1);
	vector<int> count(t.size()+1, 105);
	count[0] = 0;
	for(int i =0;i< n;i++){
		int m ; cin>> m;
		for(int j=0;j<m;j++){
			string temp; cin>> temp;
			a[i].push_back(temp);
		}
	}

	for(int i =0;i< n;i++){
		for(int j = 1; j<=t.size();j++){
			for(int k =0;k<a[i].size();k++){
				if( strings[j].size() - a[i][k].size()>=0){
					long long cal = 0;
					long long temp3= 1;
					for(int l =0;l< a[i][k].size();l++){
						cal += (a[i][k][l]-'a')* temp3;
						temp3*=31;
					}

					int index = strings[j].size() - a[i][k].size();
					if(strs[index] + cal*calc(index) == strs[j]){
						count[j] = min(count[j], count[index] +1);
					}
				}
			}
		}
	}
	if(count[t.size()]==101) cout<<"-1"<<endl;
	else cout<< count[t.size()]<<endl;
}
 
int main() {
    solve();
    return 0;
}
