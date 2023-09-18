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
	string s;
	cin>> s;
	int n = s.size();
	int ans = 0;
	for(int i =0;i< n;i++){
		for(int j =i ;j< n;j++){
			int left = i;
			int right = j;
			bool check = true;
			while(left<=right){
				if(s[left]!=s[right]){ 
					check = false;
					break;
				}
				left++;
				right--;
			}
			if( check) {
				ans  = max( ans, j - i +1);
			}
		}
	}
	cout<< ans<< endl;
}
 
int main() {
    solve();
    return 0;
}
