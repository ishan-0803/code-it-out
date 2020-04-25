#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

bool check(string t,string p,vector<ll> &a,ll x)
{
    ll n=t.size(),m=p.size(),i,j;
    vector<ll> b(n+5,0);
    for(i=0;i<=x;i++) b[a[i]]=1;
    i=j=0;
    while(j<m && i<n)
    {
        if(!b[i] && p[j]==t[i]) j++;
        i++;
    }
    if(j==m) return 1;
    return 0;
}
int main() 
{
	ll n,i,l,r,m,ans,x;
	string t,p;
	cin>>t>>p;
	n=t.size();
	vector<ll> a(n);
	for(auto &i: a) cin>>i , i--;
	l=0,r=n-1,ans=0;
	while(l<=r)
	{
	    m=(l+r)/2;
	    if(check(t,p,a,m) && !check(t,p,a,m+1))
	    {
	        ans=m+1;
	        break;
	    }
	    else if(check(t,p,a,m) && check(t,p,a,m+1))   l=m+1;
	    else r=m-1;
	}
	cout<<ans;
	return 0;
}