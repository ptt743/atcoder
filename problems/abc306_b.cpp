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

string addStrings(string num1, string num2) {
    string result;
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry != 0) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;
        result.insert(result.begin(), sum + '0');
    }

    return result;
}

void solve(){
  string sum ="0";
	for(int i =0;i< 64;i++){
    int t;
    cin>> t;
    if(t==1)
      sum  = addStrings(sum, to_string(1ull<<i)); 
  }
  cout<<sum<<endl;
}
 
int main() {
    solve();
    return 0;
}
