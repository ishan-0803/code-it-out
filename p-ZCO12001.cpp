#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	ll n,depth=0,ind,mx=0,imx,cur,ans=0,ans1=0,i,cur1;
	string str;
	cin>>n;
	ll a[n];
	loop(i,0,n)
	{
	    cin>>a[i];
	    if(a[i]==1)     str+='(';
	    else    str+=')';
	}
	stack<char> s;
	for(i=0;i<n;i++)
	{
	    s.push(str[i]);
	    if(s.size()==1)     cur=i+1;
	    if(s.top()=='(')
	    {
	        cur1=i+1;
	        ans++;
	        ans=min((ll)s.size(),ans);
	        ans1++;
	    }
	    else
	    {
	        ans1++;
	        s.pop();
	        s.pop();
	    }
	    if(mx<ans1)
	    {
	        mx=max(mx,ans1);
	        imx=cur;
	    }
	    if(depth<ans)
	    {
	        depth=max(depth,ans);
	        ind=cur1;
	    }
	    if(s.empty())
	    {
	        ans=0;
	        ans1=0;
	    }
	}
	cout<<depth<<" "<<ind<<" "<<mx<<" "<<imx;
	return 0;
}
