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
	long long s;
	cin>> n >> s;
	vector<long long> a(n);
	long long sum = 0;
	for(int i =0;i<n;i++){
		cin >> a[i];
		sum+= a[i];
	}
	long long remain = s%sum;
	int left = 0, right = 0;
	long long temp = 0;
	for(int i =0;i< n;i++){
		temp+=a[i];
		while(left <=i && temp>remain){
			temp -= a[left];
			left++;
		}
		if(temp==remain){
			cout<<"Yes"<<endl;
			return;
		}
	}
	long long target = sum - (s%sum);
        left = 0, right = 0;
	temp = 0;
	for(int i =0;i< n;i++){
		temp+=a[i];
		while(left <=i && temp>target){
			temp -= a[left];
			left++;
		}
		if(temp==target){
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
