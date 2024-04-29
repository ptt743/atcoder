#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<bitset>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;
#define ll unsigned long
void solve(){
	int a,b; ll c;
	cin>> a >> b >> c;
	
	int countDiff = 0;
	bitset<60> x, y, C(c);
	for(int i =0;i<60;i++){
		if(C.test(i)) countDiff++;
	}
	int same = (a+b - countDiff)/2;
	if((a + b + countDiff) % 2 != 0 || a + b + countDiff > 120 
	|| a > b + countDiff || b > countDiff + a || countDiff > a + b){
        	cout << "-1" << endl;
        	return ;
    	}
	int numx = a- same ;
	int numy = b- same ;
	for(unsigned i =0;i<60;i++){
		if(C.test(i)){
			if(numx){
				x.set(i);
				--numx;
			}else{
				y.set(i);
				--numy;
			}
		} else {
			if(same>0){
				x.set(i);
				y.set(i);
				--same;
			}	
		}
	}
	cout<< x.to_ullong() <<" "<<y.to_ullong()<<endl;
}
 
int main() {
    solve();
    return 0;
}
