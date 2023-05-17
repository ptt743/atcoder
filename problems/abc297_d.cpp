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
	long long a,b;
	cin>> a>> b;
	long long count=0;
	long long min_val = min(a,b);
	long long max_val = max(a,b);
	while(1){
		if(min_val == max_val) break;
		count+= max_val/ min_val -1;
		if( max_val % min_val > 0) {
			count++;
			long long temp = max_val % min_val;
			max_val = min_val;
			min_val  = temp;
		} else max_val = min_val;
	}
	cout<<count<<endl;

}
 
int main() {
    solve();
    return 0;
}
