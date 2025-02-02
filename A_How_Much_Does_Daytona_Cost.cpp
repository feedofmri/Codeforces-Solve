#include <bits/stdc++.h>
using namespace std;

// Aliases for common types
using ll = long long;
using ull = unsigned long long;
using ld = long double;

// Constants
const int INF = 1e9 + 7;  // Infinity for int
const ll LINF = 1e18;     // Infinity for long long
const ld EPS = 1e-9;      // Precision for floating point
const int MOD = 1e9 + 7;  // Modulo for calculations

// Macros for loops and debugging
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)

#ifdef DEBUG
    #define dbg(x) cerr << #x << ": " << (x) << endl;
#else
    #define dbg(x)
#endif

// Utility functions
ll gcd(ll a, ll b) {
    while (b) a %= b, swap(a, b);
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

ll mod_add(ll a, ll b, ll m = MOD) {
    return ((a % m) + (b % m) + m) % m;
}

ll mod_sub(ll a, ll b, ll m = MOD) {
    return ((a % m) - (b % m) + m) % m;
}

ll mod_mul(ll a, ll b, ll m = MOD) {
    return ((a % m) * (b % m)) % m;
}

ll mod_exp(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

ll mod_inv(ll a, ll m = MOD) {
    return mod_exp(a, m - 2, m);
}

// Debugging utilities
template<typename T> void print_vector(const vector<T> &v) {
    for (const auto &x : v) cout << x << " ";
    cout << endl;
}


int main() {
    fast_io();

    int t = 1;
    cin >> t;

    while (t--) {
        bool flag = false;
        int i, j; cin >> i >> j;
        vector<int>num(i);
        for(int k=0; k<i; k++){
            cin >> num[k];
            if(num[k] == j){
                flag = true;
            }
        }
        if(flag){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
        
    }

    return 0;
}
