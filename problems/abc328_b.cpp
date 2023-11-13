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
	int count =0;
	for(int i =1;i<=n;i++){
		int d;
		cin>> d;
		if(i<=9){
			if(d>=i) count++;
			if(d>=10*i+i) count++;
		}else{
			
			bool check = false;
			int num =0;
			for(int j =1;j<10;j++) if(j*10+j==i){ check = true; num = j;}

			if(check){
				if(d>=num) count++;
				if(d>= i) count++;
			}
		}
	}
	cout<< count<< endl;
}
 
int main() {
    solve();
    return 0;
}
