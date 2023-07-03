<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using mint = modint998244353;
using ll = long long;

// https://youtu.be/ylWYSurx10A?t=2352
template<typename T>
struct Matrix {
  int h, w;
  vector<vector<T>> d;
  Matrix() {}
  Matrix(int h, int w, T val=0): h(h), w(w), d(h, vector<T>(w,val)) {}
  Matrix& unit() {
    assert(h == w);
    rep(i,h) d[i][i] = 1;
    return *this;
  }
  const vector<T>& operator[](int i) const { return d[i];}
  vector<T>& operator[](int i) { return d[i];}
  Matrix operator*(const Matrix& a) const {
    assert(w == a.h);
    Matrix r(h, a.w);
    rep(i,h)rep(k,w)rep(j,a.w) {
      r[i][j] += d[i][k]*a[k][j];
    }
    return r;
  }
  Matrix pow(long long t) const {
    assert(h == w);
    if (!t) return Matrix(h,h).unit();
    if (t == 1) return *this;
    Matrix r = pow(t>>1);
    r = r*r;
    if (t&1) r = r*(*this);
    return r;
  }
};

int main() {
  ll n; int m;
  cin >> n >> m;
  vector<string> S(m);
  rep(i,m) cin >> S[i];

  auto check = [&](int t, int w) {
    string ts;
    rep(i,w) ts += 'a'+(t&1), t >>= 1;
    reverse(ts.begin(), ts.end());
    for (string s : S) {
      if (ts.find(s) != string::npos) return false;
    }
    return true;
  };

  int l = 5, d = 1<<l;
  if (n < l) {
    int ans = 0;
    rep(i,1<<n) {
      if (check(i,n)) ans++;
    }
    cout << ans << endl;
    return 0;
  }

  Matrix<mint> a(d,d), x(1,d);
  rep(i,d) {
    rep(c,2) {
      int j = (i<<1)|c;
      if (!check(j,l+1)) continue;
      j &= d-1;
      a[i][j] += 1;
    }
  }
  rep(i,d) {
    if (check(i,l)) x[0][i] = 1;
  }

  x = x*a.pow(n-l);
  mint ans;
  rep(i,d) ans += x[0][i];
  cout << ans.val() << endl;
  return 0;
=======
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#define N 777

using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;
long long n;int m,sz,tre[N][2],fail[N],sum;bool ban[N];
string s;
void solve(){
  cin>> n>> m;
  for(int j =1;j>=0;j--){
  for(int i =0;i< 20;i++){
    cout<<tre[j][i]<<" ";
  }
  cout<<endl;
  }

	for(int j;m--;)
	{
    string s;
    j=0;
    cin>>s ;
    cout<<"jjjjjjjjj"<<j<<endl;
		for(int i=0;s[i];j=tre[j][s[i++]!='a'])
			if(!tre[j][s[i]!='a']){
        tre[j][s[i]!='a']=++sz;
        cout<<i<<" "<<j<<" "<< s[i] << " "<< tre[j][s[i]!='a']<<endl;
      }
		ban[j]=1;
    cout<<"j"<<j<<endl;
	}	
  for(int j =1;j>=0;j--){
  for(int i =0;i< 20;i++){
    cout<<tre[j][i]<<" ";
  }
  cout<<endl;
  }
}
 
int main() {
    solve();
    return 0;
>>>>>>> refs/remotes/origin/main
}
