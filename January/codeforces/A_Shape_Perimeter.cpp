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
//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...heinto>void faltu(T arg,const heinto&...rest){cerr<<arg<<' ';faltu(rest...);}
//gcd,lcm
int gcd ( int a, int b ) { return __gcd ( a, b ); }
int lcm ( int a, int b ) { return a * ( b / gcd ( a, b ) ); } 
// Input/output helpers
template <typename T> void read(vector<T>& v) { for (auto& x : v) cin >> x; }
template <typename T> void print(const vector<T>& v) { for (const auto& x : v) cout << x << ' '; cout << '\n'; }

//mod
#define MOD 1000000007
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }

const int mx = 1e5+123;

void solve()
{
    in2(a,b);
    int s1=0,s2=0;
    loop(0,i,a){
        in2(x,y);
        if(i!=0){
            s1+=x;
            s2+=y;
        }
    }
    cout<<2*((s1+b)+(s2+b))<<endl;
}

int32_t main()
{
    fast_io;
    int t = 1;
    cin >> t;  
    while (t--) solve();
    return 0;
}