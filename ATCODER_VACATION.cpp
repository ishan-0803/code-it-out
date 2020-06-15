#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pp pop_back
#define bs binary_search
#define pll pair<ll,ll>
#define ppll pair<ll,pll>
#define sll stack<ll>
#define qll queue<ll>
#define vll vector<ll>
#define vpll vector<pll>
#define vc vector <char>
#define matrix vector<vector<ll>>
#define all(x) x.begin(),x.end()
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define rloop(i,s,n) for(ll i=s;i>=n;i--)
#define test ll t ; cin>>t; while(t--)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
ll mod = 1000000007;  double pi = 3.1415926535;

// const ll mxn = 1e6 + 1;
// ll a[mxn];

// ll num_generator()
// {
// 	return rand() % 1000;
// }

// void array_generator(ll n)
// {
// 	loop(i, 0, n)		a[i] = rand() % 100;
// }

void solve()
{
	ll n;		cin >> n;
	ll a[n][3];
	loop(i, 0, n)
	{
		loop(j, 0, 3)		cin >> a[i][j];
	}
	ll dp[n + 1][4];
	memset(dp, 0, sizeof(dp));
	loop(i, 1, n + 1)
	{
		loop(j, 1, 4)
		{
			if (j == 1)	dp[i][j] = a[i - 1][j - 1] + max(dp[i - 1][j + 1], dp[i - 1][j + 2]);
			else if (j == 2)	dp[i][j] = a[i - 1][j - 1] + max(dp[i - 1][j - 1], dp[i - 1][j + 1]);
			else	dp[i][j] = a[i - 1][j - 1] + max(dp[i - 1][j - 2], dp[i - 1][j - 1]);
		}
	}
	cout << max({dp[n][1], dp[n][2], dp[n][3]}) << nl;
}

int main() {
	fast_io;
// #ifndef ONLINE_JUDGE
// 	freopen("input1.txt", "r", stdin);
// 	freopen("output1.txt", "w", stdout);
// #endif

	// test{
	solve();
	// }
	return 0;
}


