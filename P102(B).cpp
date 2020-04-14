#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

void solve()
{
    string s;
    ll sum=0,n,ans=0;
    cin>>s;
    loop(i,0,s.length())    sum+=(s[i]-'0');
    if(s.length()==1)   cout<<"0";
    else if(sum>=1 && sum<=9)   cout<<"1";
    else
    {
        ans++;
        n=sum;
        sum=0;
        while(1)
        {
            sum+=(n%10);
            n/=10;
            if(n==0)
            {
                ans++;
                if(sum/10==0)
                {
                    cout<<ans;
                    break;
                }
                else
                {
                    n=sum;
                    sum=0;
                }
            }
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	solve();
	return 0;
}
