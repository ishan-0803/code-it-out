#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define pb emplace_back
#define bs binary_search
#define all(x) x.begin(),x.end()
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
ll mod=1e9+7;

int main() {
	fast_io;
	
	double n,m,ans=0;
	cin>>m>>n;
	loop(i,1,m+1)   ans+=(i*(pow(i/m,n)-pow((i-1)/m,n)));
	cout<<fixed<<setprecision(12)<<ans;
	return 0;
}
