#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)
#define MOD 1000000007

ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;   
 
    x = x % p;  
  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
  
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res; 
}

ll modInverse(ll n, ll p) 
{ 
    return power(n, p-2, p); 
} 

ll nCrModPFermat(ll n, ll r, ll p) 
{ 
   if (r==0) 
      return 1; 

    ll fac[n+1]; 
    fac[0] = 1; 
    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    test{
        ll l1,l2,n,m,ans=0,i=1;
        cin>>l1>>l2;
        n=max(l1,l2);
        m=min(l1,l2);
        ans+=(nCrModPFermat(m+n,m,MOD))%MOD;
        ans%=MOD;
        cout<<ans<<"\n";
    }
    return 0;
}
