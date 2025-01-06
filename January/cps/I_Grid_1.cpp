#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sortv(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s,i,n) for(int i=s;i<n;i++)
#define loopr(s,i,n) for(int i=n-1;i>=s;i--)
#define endl '\n'
const int MOD = 1e9+7;
int n, m;
char a[1005][1005];
int dp[1005][1005];
vector<pair<int, int>> directions = {{0, 1}, {1, 0}};
bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}
int dfs(int i, int j) {
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    if (i == n - 1 && j == m - 1) {
        return 1;
    }
    int ways = 0;
    for (auto dir : directions) {
        int ni = i + dir.first;
        int nj = j + dir.second;
        if(valid(i, j) && a[i][j] != '#'){
            ways = (ways + dfs(ni, nj)) % MOD;
        }
    }
    dp[i][j] = ways;

    return dp[i][j];
}

void solve() {
    cin >> n >> m;
    loop(0, i, n) {
        loop(0, j, m) {
            cin >> a[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    int result = dfs(0, 0);
    
    cout << result << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
