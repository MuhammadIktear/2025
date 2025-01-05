#include <bits/stdc++.h>
using namespace std;

int dp[501][501];
int solve(int a, int b) {
    if (a == b) return 0;
    if (dp[a][b] != -1) return dp[a][b];

    int res = INT_MAX;
    for (int i = 1; i < a; i++) {
        res = min(res, solve(i, b) + solve(a - i, b) + 1);
    }
    for (int i = 1; i < b; i++) {
        res = min(res, solve(a, i) + solve(a, b - i) + 1);
    }
    return dp[a][b] = res;
}

int main() {
    int a, b;
    cin >> a >> b;
    memset(dp, -1, sizeof(dp));
    cout << solve(a, b) << endl;

    return 0;
}
