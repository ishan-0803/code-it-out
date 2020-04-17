#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	ll m,s,x,j,k;
	cin>>m>>s;
	x=s;
	if(s>=1 && s<=9*m)
	{
	    ll g[m],a[m];
    	loop(i,0,m)
    	{
	       if(x>=9)
	       {
	            g[i]=9;
	            x-=9;
	        }
	        else if(x==0)
	        {
	             g[i]=0;
	        }
	        else
	        {
	             g[i]=x;
	             x=0;
	        }
    	}
    	x=s;
    	loop(i,0,m)
    	{
    	    if(i)   k=0;
    	    else    k=1;
    	    
    	    for(j=k;j<10;j++)
    	    {
    	        if(x-j<=9*(m-i-1))
    	        {
    	            a[i]=j;
    	            x-=j;
    	            break;
    	        }
    	    }
    	}
    	loop(i,0,m)     cout<<a[i];
    	cout<<" ";
    	loop(i,0,m)     cout<<g[i];
	}
	else if(s==0 && m==1)   cout<<"0 0";
	else    cout<<"-1 -1";
	
	return 0;
}
