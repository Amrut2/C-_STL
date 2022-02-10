#include <bits/stdc++.h>
#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cout << #x " is " << x << endl
#include <iostream>

using namespace std;
// Macros
#define F first
#define S second
// #define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define int long long

#define ll long long
#define pb emplace_back
#define mp make_pair
#define F first
#define S second
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
// #define all(a) (a).begin(), (a).end()
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


ll Max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}

ll Min(ll a, ll b)
{
    if (a < b)
        return a;
    return b;
}



void printvector(std::vector<ll> v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << "" << endl;
}



void printarray(ll a[], ll n)
{
    for (ll i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << "" << endl;
}


// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
 
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v)
{
	for (auto &it : v)
		cin >> it;
	return istream;
}
 
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }



// *****************************************************************************

void solve() {
    
    
    
}


int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}
