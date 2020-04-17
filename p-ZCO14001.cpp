#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	ll n,h,x,i=0,y=0;
	cin>>n>>h;
	ll a[n];
	loop(i,0,n)     cin>>a[i];
	while(cin>>x)
	{
	    if(x==0)    break;
	    
	    if(x==2 && i!=n-1)  i++;
	    else if(x==1 && i!=0)   i--;
	    else if(x==3 && a[i]!=0)
	    {
	        if(!y)      a[i]--;
	        y=1;
	    }
	    else if(x==4)
	    {
	        if(a[i]+1<=h)
	        {
	            if(y)       a[i]++;
	            y=0;
	        }
	    }
	   // cout<<i<<" "<<a[i]<<"\n";
	}
	loop(i,0,n)     cout<<a[i]<<" ";
	return 0;
}
