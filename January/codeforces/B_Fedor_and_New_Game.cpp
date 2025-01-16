// //string Covert2Binary
// string Covert2Binary(int n){
//     string res="";
//     while(n!=1){
//         if(n%2==1)res+='1';
//         else res+='0';
//         n=n/2;
//     }
//     return res;
// }


// //Convert2Desimal
// int Convert2Desimal(string x){
//     int len=x.size();
//     int p2=1,num=0;
//     for(int i=len-1;i>=0;i--){
//         if(x[i]=='1'){
//             num+=p2;
//         }
//         p2=p2*2;
//     }
//     return num;
// }

/* AND-> All true->true,,1 false->false
    n = 13 & 7 = 5
    00000...001101 - > 13
    00000...000111 - > 7
    -----------------------
    00000...000101 - > 5

    32 no. bit is a sign bit. If 32 is 0 then positive else 1 then negtive
*/



/* OR -> 1 true -> true
    n=13|7 =15
    1101
    0111
    ----
    1111
*/

/* XOR -> no. of 1s ->odd -> 1
   XOR -> no. of 1s ->Even ->0

   n=13^7 =0
   1101
   0111
   ----
   1010

*/

/*
    NOT n=~(5)
    1. flip
    2. Check (-ve)
    if(condition 2 is true):
        2's complement
    else stop



    000......00000101
    111......11111010 (flip)

    here sign bit 1 is (-ve)
    1s = 000.....00000110
                       +1
    ----------------------
         0000.....00000110 = 6
         n = ~(5) =6



    Another example:
    n = ~(-6) =5 
    0.......0000110
    1.......1111001 (1s)
                 +1 (2s)
    ----------------
    1........1111010 (store negetive value in memory using 2s compliment)
    0........0000101 =5 (stop)

    here sign bit (+ve)->stop                   
*/
/*
    >> Right shift

    m=13>>1 =6
    1101
    0110

    m=13>>2
    1101
    0011

    n>>k = (n/n^k)
*/
/*
    << Left shift
    n =13<<1 =26
    01101
    11010

    mum<<k=n*2^k
*/
/*
    1<<13 =2^23
    1<<n = 2^n
*/
/*
    pb1: check if the ith bit is set or not
    ans: if(n&(1<<i)!=0)

    pb2: Set the ith bit
    ans: n|1<<i

    pb3: Clear the ith bit
    ans: n&~(1<<i)

    pb4: Toggle the ith bit
    ans: n^(1<<i)

    pb5: Remove the rightmost bit
    ans: n&n-1
    
    pb6: Check the number is a power of 2
    ans: if(n&n-1 ==0)

    pb7: Count the number of set bit
    ans:
    int countSetBits(int n)
    {
        int count = 0;
        while (n)
        {
            n = n & (n - 1);
            count++;
        }
        return count;
    }

    pb8: Minimum bit flib to convert number
    ans:
    start=10 , Goal=7
    start^Goal
    1010
   ^0110
   ------
    1101
    Then ccount number of set bit to following pb7
*/
/*
has_single_bit: checks if the number is a power of two
bit_ceil / bit_floor: round up/down to the next power of two
rotl / rotr: rotate the bits in the number
countl_zero / countr_zero / countl_one / countr_one: count the leading/trailing zeros/ones
popcount: count the number of set bits
Additionally, there are also predefined functions in some compilers that help working with bits. E.g. GCC defines a list at Built-in Functions Provided by GCC that also work in older versions of C++:

__builtin_popcount(unsigned int) returns the number of set bits (__builtin_popcount(0b0001'0010'1100) == 4)
__builtin_ffs(int) finds the index of the first (most right) set bit (__builtin_ffs(0b0001'0010'1100) == 3)
__builtin_clz(unsigned int) the count of leading zeros (__builtin_clz(0b0001'0010'1100) == 23)
__builtin_ctz(unsigned int) the count of trailing zeros (__builtin_ctz(0b0001'0010'1100) == 2)
__builtin_parity(x) the parity (even or odd) of the number of ones in the bit representation
*/
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
    in3(n,m,k);
    vec v(m+1);
    read(v);
    int c=0;
    loop(0,i,m){
        if(__builtin_popcount(v[i]^v[m])<=k)c++;
    }
    cout<<c<<endl;
}

int32_t main()
{
    fast_io;
    int t = 1;
    //cin >> t;  
    while (t--) solve();
    return 0;
}

