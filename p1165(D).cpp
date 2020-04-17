#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

ll countDivisors(ll n) 
{ 
    ll cnt = 0; 
    for (ll i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n / i == i) 
                cnt++; 
            else
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	test{
	    ll n,x=1,y,ans=1;
	    cin>>n;
	    ll a[n];
	    loop(i,0,n)     cin>>a[i];
	    sort(a,a+n);
	    if(n%2==0)
	    {
	        x=a[0]*a[n-1];
	        if(n>2)
	        {
	            loop(i,1,n/2+1)
	            {
	                y=a[i]*a[n-i-1];
	                if(y!=x)
	                {
	                    ans=0;
	                    break;
	                }
	            }
	        }
	    }
	    else
	    {
	        x=a[n/2]*a[n/2];
	        if(n>1)
	        {
	            loop(i,0,n/2)
	            {
	                y=a[i]*a[n-i-1];
	                if(y!=x)
	                {
	                    ans=0;
	                    break;
	                }
	            }
	        }
	    }
	    if(ans)
	    {
	        if(countDivisors(x)-2==n)   cout<<x;
	        else    cout<<"-1";
	    }
	    else    cout<<"-1";
	    cout<<"\n";
	}
	return 0;
}
