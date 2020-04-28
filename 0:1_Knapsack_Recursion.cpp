#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

ll dp[102][100002];

ll knapsack(ll W,ll w[],ll v[],ll n)
{
    if(n==0 ||  W==0)   return 0;
    
    if(dp[n][W]!=-1)    return dp[n][W];
    if(w[n]<=W)  return     dp[n][W]=max(knapsack(W,w,v,n-1),v[n]+knapsack(W-w[n],w,v,n-1));
    else    return  dp[n][W]=knapsack(W,w,v,n-1);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	ll n,W;
	cin>>n>>W;
	ll w[n+1]={0},v[n+1]={0};
	loop(i,1,n+1)
	{
	    cin>>w[i]>>v[i];
	}
	memset(dp,-1,sizeof(dp));
	ll ans=knapsack(W,w,v,n+1);
	cout<<ans;
	return 0;
}
