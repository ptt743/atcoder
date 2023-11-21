#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int N = 10, M = 30;

int n, m;
LL mod;
int p[N];
array<LL, 3> edge[M];

int find(int x)
{
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

void solve()
{
    cin >> n >> m >> mod;
    for (int i = 0; i < m; i ++ )
        cin >> edge[i][0] >> edge[i][1] >> edge[i][2];

    LL res = 1e18;
    vector<int> v;
    vector<bool> st(m);
    auto dfs = [&] (auto self, int u, int last) -> void
    {
        if (u == n - 1)
        {
            for (int i = 1; i <= n; i ++ ) p[i] = i;
            LL s = 0;
            bool ok = true;
            for (auto x : v)
            {
                int a = edge[x][0], b = edge[x][1];
                LL c = edge[x][2];
                int pa = find(a), pb = find(b);
                if (pa == pb)
                {
                    ok = false;
                    break;
                }

                p[pa] = pb;
                s = (s + c) % mod;
            }

            if (ok) res = min(res, s);
            return;
        }

        for (int i = last + 1; i < m; i ++ )
            if (!st[i])
            {
                st[i] = true;
                v.push_back(i);
                self(self, u + 1, i);
                v.pop_back();
                st[i] = false;
            }
    };

    dfs(dfs, 0, -1);

    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T = 1;
    
    while (T -- ) solve();

    return 0;
}
