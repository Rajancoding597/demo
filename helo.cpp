#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(ll i=0; i<n; i++)
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(),x.end()
#define sortkrde(x) sort(all(x))
#define pb push_back
#define ff first
#define ss second
#define sortulta(x) sort(all(x),greater<ll> ())
#define fastio() ios_base::sync_with_stdio(false);
#define mod 1000000007
#define bp(x) __builtin_popcount(x)
#define clr(x) memset(x,0,sizeof(x))
#define tc(t) while(t--)
#define loop(i,a,b) for(ll i=a; i<=b; i++)
#define ull unsigned long long
#define getmax(x) *max_element(all(x))
#define getmin(x) *min_element(all(x))
#define print(x) for(auto h : x) cout<<h<<" "; cout<<endl;
#define mid(l,r) (l+(r-l)/2)
#define w(t) ll t; cin>>t; while(t--)


// ORDERED SET:- 
// 1. find_by_order(k) : - returns to an iterator to the kth element of the set(0 based indexing)
// 2. order_of_key(val) : - returns the count that how many elements in the set are STRICTLY smaller than val
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

//Some functions of counting leading and trainling zeros and set bits : -
// Number of leading zeroes: __builtin_clz(x)
//   Number of trailing zeroes : __builtin_ctz(x)
//   Number of 1-bits: __builtin_popcount(x) 

#define veryl 1000000000
#define modu 998244353
#define vlli(v,n) vector<ll> v(n); fo(i,n) cin>>v[i];
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void swap(ll &a,ll &b)
{
    a^=b;
    b^=a;
    a^=b;
}

ll modd(ll a, ll b){if(a<0)return(a%b)+b; else return a%b;}

//To Calculate prefix sum vector of an vector 
vector<ll> prefix_sum(vector<ll> v) 
{
        vector<ll> final_ans(v.size(),0);
    final_ans[0] = v[0];
    for(ll i=1; i<v.size(); i++)
    {
            final_ans[i]+=final_ans[i-1]+v[i];
    }
    return final_ans;
}

// To check if a number is a power of 2
bool isPowerOfTwo(int x)
{
    // First x in the below expression is
    // for  the case when x is 0
    return x && (!(x & (x - 1)));
}

// It gives the pos of least significant bit
ll lastSetBit(ll n){
    return log2(n & -n)+1LL;
}

//map find fnction
bool mapfind(map<ll,ll> m,ll a)
{
    if(m.find(a)!=m.end()) return true;
    return false;
}

 void solve(ll k)
{
   cout<<"hor vi mundiya ki haal chaal"<<endl;
}

int main()
{
    fastio();
    ll k=1;
    w(t)
    {
        solve(k);
        k++;
    }
return 0;
}