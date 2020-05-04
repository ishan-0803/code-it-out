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
	
	string s;
	cin>>s;
	ll k,n=s.length(),len=0,z=0;
	cin>>k;
	loop(i,0,n)     if(s[i]!='*' && s[i]!='?')    len++;
	reverse(all(s));
	if(len==k)
	{
	    reverse(all(s));
	    loop(i,0,n)     if(s[i]!='*' && s[i]!='?')    cout<<s[i]; 
	    z=1;
	}
	else if(len>k)
	{
	    loop(i,0,n)
	    {
	    if((s[i]=='*' || s[i]=='?' )&& s[i]!='#' && i!=n-1)
	    {
	        s[i+1]='#';
	        len--;
	    }
	    if(len==k)
	    {
	        reverse(all(s));
	        z=1;
	        loop(j,0,n)     if(s[j]!='*' && s[j]!='?' && s[j]!='#')     cout<<s[j];
	        break;
	    }
	    }
	}
	else
	{
	    vector<char> v;
	    ll i=0;
	    while(i<n)
	    {
	        if(s[i]=='*' && i!=n-1)
	        {
	            while(len!=k){
	            v.eb(s[i+1]);
	            len++;
	            }
	        }
	        else if(s[i]!='?')   v.eb(s[i]);
	        
	        if(len==k)
	        {
	            z=1;
	            loop(j,i,n)
	            {
	                if(s[j]!='*' && s[j]!='?')  v.eb(s[j]);
	            }
	            reverse(all(v));
	            for(char ch : v)    cout<<ch;
	            break;
	        }
	        i++;
	    }
	}
	if(!z)      cout<<"Impossible";
	return 0;
}
