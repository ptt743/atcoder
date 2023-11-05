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
	while(1){
		string temp = to_string(n);

		int first = temp[0]-'0';
		int second = temp[1]-'0';
		int third = temp[2]-'0';
		if(first* second == third){
			break;
		}
		n++;
	}
	cout<< n<<endl;
}
 
int main() {
    solve();
    return 0;
}
