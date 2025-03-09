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

int solve(){
	int y; cin>> y;
	if(y%4!=0) return 365;
	else {
		if(y%100!=0) return  366;
		else if ( y%400 !=0) return 365;
		else if(y %400==0) return 366;
	}
	return 0;
}
 
int main() {
    cout<<solve()<<endl;
    return 0;
}
