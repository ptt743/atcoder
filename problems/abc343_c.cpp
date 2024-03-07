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
	long long n;
	cin>> n;
	long long mx = 1e6;
	long long ans = 0;
	for(long long i =0;i< mx ;i++){
		long long num = i*i*i;
		if(num> n) break;
		string temp = to_string(num);
		int right = temp.size()-1;
		int left = 0;
		bool check =  true;
		while(left<right){
			if(temp[left]!=temp[right]){
				check = false;
				break;
			}
			left++;
			right--;
		}
		if(check) ans = max(ans, num);
	}
	cout<< ans<< endl;
}
 
int main() {
    solve();
    return 0;
}
