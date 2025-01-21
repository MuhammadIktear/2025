#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define vec vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define vp vector<pair<int,int>>
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define in(n) int n;cin>>n
#define in2(a,b) int a,b;cin>>a>>b
#define in3(a,b,c) int a,b,c;cin>>a>>b>>c
#define pb(x) push_back(x)
#define sortv(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s,i,n) for(int i=s;i<n;i++)
#define loopr(s,i,n) for(int i=n-1;i>=s;i--)
#define loopa(u,x) for(auto u:x)
#define F first
#define S second
#define endl '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}


const int mx = 1e5+123;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vv(n, vector<int>(m));
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vv[i][j];
        }
        sort(vv[i].begin(), vv[i].end()); 
        p[i] = {vv[i][0], i};  
    }
    sortv(p);
    loop(0,j,m) {
        if (j > 0) { 
            int last = p[n - 1].second; 
            int first = p[0].second; 
            if (vv[first][j] < vv[last][j - 1]) {
                cout << -1 << endl;
                return;
            }
        }
        loop(0,i,n-1) { 
            int x = p[i].second;
            int y = p[i + 1].second;
            if (vv[x][j] > vv[y][j]) {
                cout << -1 << endl;
                return;
            }
        }
    }

    for (auto u : p) {
        cout << u.second + 1 << " "; 
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}