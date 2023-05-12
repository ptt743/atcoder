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
	long long n,k;
  long long m;
  cin>>n>>m>>k;
  string s;
  cin>> s;
  vector<int> count(n+1);
  for(int i=1;i<=n;i++){ 
    count[i] = count[i-1];
    if(s[i-1]=='x') count[i]++;
  }
  long long left = 1, right = n*m;
  while(left<=right){
    long long mid = (left+ right)/2;
    bool check = false;
    for(int i =1;(i+mid-1)<=n*m && i<= n;i++){
       long long temp = (mid+i-1)/n;
       long long temp2 = (mid+i-1)%n;
       long long countk = count[n]*temp + count[temp2]- count[i-1];
        if(countk<=k) check = true;
    }
    if(check)left = mid+1;
    else right = mid-1;
  }
  cout<<right<<endl;
}
 
int main() {
    solve();
    return 0;
}
