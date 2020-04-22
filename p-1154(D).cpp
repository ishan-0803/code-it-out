#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	ll n,a,b,f,ans=0;
	cin>>n>>b>>a;
	ll arr[n];
	loop(i,0,n)     cin>>arr[i];
	f=a;
	loop(i,0,n)
	{
	    if(a==f)
	    {
	        a--;
	        ans++;
	    }
	    else if(a<f)
	    {
	        if(arr[i] && b>0)
	        {
	            b--;
	            a++;
	            if(a>f) a=f;
	        }
	        else if(a>0)    a--;
	        else if(b>0)    b--;
	        else    break;
	        ans++;
	    }
	   // cout<<b<<" "<<a<<"\n";
	    if(b==0 && a==0)    break;
	}
	cout<<ans;
	return 0;
}
