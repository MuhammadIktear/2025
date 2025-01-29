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
template <typename T> void read(vector<T>& v) { for (auto& x : v) cin >> x; }
template <typename T> void print(const vector<T>& v) { for (const auto& x : v) cout << x << ' '; cout << '\n'; }

const int mx = 1e5+123;

void solve()
{
    in(n);
    vec v(n);
    read(v);
    vector<int>s(v.begin(),v.end());
    sortv(s);
    if(s==v){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else{
        bool f=false;
        int fst=-1,second=-1;
        loop(1,i,n){
            if(!f&&v[i]<v[i-1]){
                f=true;
                fst=i-1;
                second=i;
            }
            else if(v[i]<v[i-1]){
                second=i;
            }
        }
        reverse(v.begin()+fst,v.begin()+second+1);
        //printv(v);
        if(s==v){
            cout<<"yes"<<endl;
            cout<<fst+1<<" "<<second+1<<endl;
        }
        else cout<<"no"<<endl;
    }
}

int32_t main()
{
    fast_io;
    int t = 1;
    //cin >> t;  
    while (t--) solve();
    return 0;
}