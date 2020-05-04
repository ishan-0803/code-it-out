#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"
#define ff first
#define ss second
#define mod 1e9+7
#define lb lower_bound
#define ub upper_bound
#define eb emplace_back
#define pp pop_back
#define bs binary_search
#define all(x) x.begin(),x.end()
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
	fast_io;
	
	ll n,i=0,ind=1,len=0,j=1;
	cin>>n;
	string s;
	cin>>s;
	while(i<n)
	{
	    if(ind&1 && i!=n-1)
	    {
	        if(i+j>=n)  break;
	        else if(s[i+j]==s[i])
	        {
	            s[i+j]='#';
	            j++;
	        }
	        else
	        {
	            i+=j;
	            ind++;
	        }
	    }
	    else
	    {
	        j=1;
	        i++;
	        ind++;
	    }
	}
	loop(i,0,n)     if(s[i]!='#')   len++;
	if(len%2==0)
	{
	    cout<<n-len<<nl;
	    loop(i,0,n)     if(s[i]!='#')   cout<<s[i];
	}
	else
	{
	    len--;
	    cout<<n-len<<nl;
	    ll l=1;
	    loop(i,0,n)
	    {
	        if(s[i]!='#' && l<=len)
	        {
	            cout<<s[i];
	            l++;
	        }
	    }
	}
	return 0;
}
