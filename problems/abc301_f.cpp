#include <algorithm>
#include <iostream>
#include<vector>
#include <unordered_set>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

vector<mint> fact, ifact, p26;
void init(int N){
    fact.resize(N + 1, 1);
    ifact.resize(N + 1);
    p26.resize(N + 1, 1);
    for(int i = 0; i < N; ++i){
        fact[i + 1] = fact[i] * (i + 1);
        p26[i + 1] = p26[i] * 26;
    }
    ifact[N] = fact[N].inv();
    for(int i = N; i > 0; --i){
        ifact[i - 1] = ifact[i] * i;
    }
}

mint binom(int n, int r){
    return 0 <= r && r <= n ? fact[n] * ifact[r] * ifact[n - r] : 0;
}

int upper(char c){
    return c == '?' ? 26 : isupper(c) ? 1 : 0;
}

int lower(char c){
    return c == '?' ? 26 : islower(c) ? 1 : 0;
}

int main(){
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    int N = S.size();
    init(max(26, N));
    vector<vector<mint>> dp(N + 1, vector<mint>(2));
    dp[0][0] = 1;
    for(int i = 0; i < N; ++i){
        dp[i + 1][0] += dp[i][0] * lower(S[i]);
        dp[i + 1][1] += dp[i][0] * upper(S[i]);
        dp[i + 1][1] += dp[i][1] * upper(S[i]);
    }
    mint ans = dp[N][0] + dp[N][1];
    cout<<"ans "<<ans.val()<<endl;
    int q = 0;
    unordered_set<char> s;
    for(int i = N - 1; i >= 0; --i){
        mint sub = 0;
        int u = s.size();
        for(int v = 0; v <= min(26 - u, q); ++v){
            sub += binom(q, v) * fact[26 - u] * ifact[26 - u - v] * p26[q - v];
        }
        ans += sub * lower(S[i]) * dp[i][1];
        if(S[i] == '?'){
            ++q;
        }else if(isupper(S[i])){
            if(s.count(S[i])){
                break;
            }
            s.insert(S[i]);
        }
    }
    cout << ans.val() << endl;
}

