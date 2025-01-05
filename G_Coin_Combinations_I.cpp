#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

vector<int> dp(1000001, -1);  

int solve(int x, vector<int>& a) {
    if (x == 0) return 1;  
    if (x < 0) return 0;  
    if (dp[x] != -1) return dp[x];
    int result = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= x) {
            result = (result + solve(x - a[i], a)) % MOD; 
        }
    }

    dp[x] = result; 
    return result;
}

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << solve(x, a) << endl;

    return 0;
}
