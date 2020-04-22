#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

unordered_map<string,ll> M,N;

string new_name(string s)
{
    ll num;
    num=N[s]+1;
    N[s]=num;
    string p;
    while(num!=0)
    {
        char ch=(num%10)+48;
        p+=ch;
        num/=10;
    }
    reverse(p.begin(),p.end());
    return p;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	test{
	    string s;
	    cin>>s;
	    M[s]++;
	    if(M[s]==1)   cout<<"OK";
	    else
	    {
	       s.append(new_name(s));
	       M[s]++;
	       cout<<s;
	    }
	    cout<<"\n";
	}
	return 0;
}
