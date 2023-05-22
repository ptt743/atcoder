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
	int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int &x : A) cin >> x;
  int a = 1, b = N * (N + 1) / 2;
  for (int i = 0; i < N; i++) {
    vector<int> small, large;
    for (int j = i + 1; j < N; j++) {
      if (A[j] < A[i]) small.push_back(A[j]);
      if (A[j] > A[i]) large.push_back(A[j]);
    }
    int x = -1;
    if (K - a < int(small.size())) {
      sort(begin(small), end(small));
      x = small[K - a];
    }
    if (b - K < int(large.size())) {
      sort(begin(large), end(large));
      reverse(begin(large), end(large));
      x = large[b - K];
    }
    if(x!=-1){
      int j =i;
      while(A[j]!=x)j++;
      reverse(A.begin() + i, A.begin()+ j +1);
      break;
    }
    a +=small.size();
    b-=large.size();
  }
  for(int i =0;i<A.size();i++) cout<<A[i]<<" ";
  cout<<endl;


}
 
int main() {
    solve();
    return 0;
}
