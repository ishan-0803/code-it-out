#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

ll fun(ll n)
{
    ll c1=0,c2=0;
    while(n!=0)
    {
        if((n%10)!=4 &&(n%10)!=7)   return 0;
        else if(n%10==4)    c1++;
        else    c2++;
        n/=10;
    }
    if(c1==c2)      return 1;
    else    return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	string s,p,d,str;
	ll x,n,r,t,num=0,c;
	cin>>s;
	n=s.length();
	if(n%2!=0)
	{
	    x=n/2+1;
	    while(x--)  cout<<"4";
	    x=n/2+1;
	    while(x--)  cout<<"7";
	}
	else
	{
	    x=n/2;
	    while(x--)  p+='4';
	    x=n/2;
	    while(x--)  p+='7';

	    r=s.compare(p);
	    
	    x=n/2;
	    while(x--)  d+='7';
	    x=n/2;
	    while(x--)  d+='4';
	    
	    t=s.compare(d);
	    
	    if(r==0 || t==0)    cout<<s;
	    else if(r<0 && t<0)     cout<<p;
	    else if(r>0 && t>0)
	    {
	        x=n/2+1;
	        while(x--)  str+='4';
	        x=n/2+1;
	        while(x--)  str+='7';
	        cout<<str;
	    }
	    else
	    {
	        loop(i,0,n)
	        {
	            num*=10;
	            num+=(s[i]-'0');
	        }
	        while(1)
	        {
             	c=fun(num);
     	        if(c)   break;
     	        num++;
	        }
	        cout<<num;
	     }
	}
	return 0;
}
