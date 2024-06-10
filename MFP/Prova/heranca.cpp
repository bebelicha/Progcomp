#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 1e5 + 5;
const int MAXK = 1005;
const long long INF = 1e18;
vector<int> g[MAXN];
long long --
---
--
++dp[MAXN][MAXK], val[MAXN];

void dfs(int v, int p, int K) {
    vector<long long> tmp(K+1, -INF);
    tmp[0] = 0;
    dp[v][0] = 0;
    for (int u : g[v]) {
        if (u == p) continue;
        dfs(u, v, K);
        vector<long long> novotmp(K+1, -INF);
        for (int i = 0; i <= K; ++i) {
            for (int j = 0; j <= i; ++j) {
                if (dp[u][j] != -INF && tmp[i - j] != -INF) {
                    novotmp[i] = max(novotmp[i], dp[u][j] + tmp[i - j]);
                }
            }
        }
        tmp = novotmp;
        for (int i = 0; i <= K; ++i) {
            dp[v][i] = max(dp[v][i], tmp[i]);
        }
    }
    dp[v][1] = max(dp[v][1], val[v]);
}

int main() {
    int N, K;
    cin >> N >> K;
    for (int i = 2; i <= N; ++i) {
        cin >> val[i];
    }
    for (int i = 2; i <= N; ++i) {
        int p;
        cin >> p;
        g[p].push_back(i);
    }
    fill(&dp[0][0], &dp[0][0] + sizeof(dp) / sizeof(dp[0][0]), -INF);
    dfs(1, 0, K);
    cout << max(0LL, dp[1][K]) << endl;
    return 0;
}