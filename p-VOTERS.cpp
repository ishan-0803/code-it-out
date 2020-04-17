#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	set<ll> S;
	map<ll,ll> M;
	
	ll n1,n2,n3,s,x,c=0;
	cin>>n1>>n2>>n3;
	s=n1+n2+n3;
	while(s--)
	{
	    cin>>x;
	    
	    S.insert(x);
	    M[x]++;
	}

	for(ll y: S)
	{
	    if(M[y]>1)  c++;;
	}
	cout<<c<<"\n";
	for(ll y: S)
	{
	    if(M[y]>1)  cout<<y<<"\n";
	}
	return 0;
}
