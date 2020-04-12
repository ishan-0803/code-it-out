#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	ll n,k;
	cin>>n>>k;
	if(n%2==0)
	{
	    if(k>n/2)
	    {
	        k-=(n/2);
	        cout<<2*k;
	    }
	    else    cout<<(2*k)-1;
	}
	else
	{
	    if(k>n/2+1)
	    {
	        k-=((n/2)+1);
	        cout<<2*k;
	    }
	    else    cout<<(2*k)-1;
	}
	return 0;
}