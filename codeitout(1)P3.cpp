#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	ll n,x,mx=0,i,j;
	string s="";
	cin>>n;
	vector<ll> v;
	loop(i,0,n)
	{
	    cin>>x;
	    v.pb(x);
	}
	i=0;j=n-1;
	//cout<<v.size()<<"\n";
	while(1)
	{
	    if(i==j)
	    {
	        if(v[i]>mx)     s+='L';
	        
	        break;
	    }
	    
	    if(v[i]>mx && v[j]>mx)
	    {
	        if(v[i]<v[j])
	        {
	            s+='L';
	            mx=v[i];
	            i++;
	        }
	        else
	        {
	            s+='R';
	            mx=v[j];
	            j--;
	        }
	    }
	    else if(v[i]<=mx && v[j]>mx)
	    {
	            s+='R';
	            mx=v[j];
	            j--;
	    }
	    else if(v[i]>mx && v[j]<=mx)
	    {
	            s+='L';
	            mx=v[i];
	            i++;
	    }
	    else
	    {
	        break;
	    }
	}
	cout<<s.length()<<"\n"<<s<<"\n";
	return 0;
}
