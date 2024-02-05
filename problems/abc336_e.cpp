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

typedef long long ll;
ll n, a[20];
ll f[15][127][127];

ll dfs(int cur, int s, int mod, int digitSum, bool limit)
{
    if (cur == 0) return s == digitSum && mod == 0;
    if (!limit && f[cur][s][mod] != -1) return f[cur][s][mod];
    int lim = limit ? a[cur] : 9;
    ll res = 0;
    for (int i = 0 ; i <= lim ; i ++)
        res += dfs(cur - 1, s + i, (mod * 10 + i) % digitSum, digitSum, limit && (i == lim));
    if (!limit) f[cur][s][mod] = res;
    return res;
} 

ll getDigit(ll x) 
{
    int len = 0;
    while (x) a[++ len] = x % 10, x /= 10;
    ll ans = 0;
    for (int i = 1 ; i <= 126 ; i ++)
    {
        memset(f, -1, sizeof f);
        ans += dfs(len, 0, 0, i, true);
    }
    return ans;
}

int main()
{
    std::cin >> n;
    std::cout << getDigit(n) << '\n';
    return 0;
}
