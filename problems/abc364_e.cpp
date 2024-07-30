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

void chmin(int &a, int b) { a = min(a, b); }

int solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    vector dp(n + 1, vector(n + 1, vector<int>(x + 1, 1e9)));
    dp[0][0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            for (int k = 0; k <= x; k++) {
                chmin(dp[i + 1][j][k], dp[i][j][k]);
                if (k + a[i] <= x) {
                    chmin(dp[i + 1][j + 1][k + a[i]], dp[i][j][k] + b[i]);
                }
            }
        }
    }
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j <= x; j++) {
            if (dp[n][i][j] <= y) {
                cout << min(i + 1, n) << endl;
                return 0;
            }
        }
    }
}

 
int main() {
    solve();
    return 0;
}
