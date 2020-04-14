#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb emplace_back
#define loop(i,s,n) for(ll i=s;i<n;i++)
#define test ll t ; cin>>t; while(t--)

void solve()
{
    ll n,x,c=0,d=0,i,j;
    string s;
    cin>>n;
    deque<ll> a;
    vector<ll> v;
    loop(i,0,n)
    {
        cin>>x;
        a.pb(x);
    }
    v.pb(0);
    
    while(1)
    {
        if(a.size()==1)
        {
            if(v[v.size()-1]<a[0])
            {
                v.pb(a[0]);
                s+='L';
            }
            break;
        }
        if(a.front()>v[v.size()-1] && a.back()>v[v.size()-1])
        {
            if(a.front()==a.back())
            {
                if(a.size()>3)
                {
                    i=1;j=a.size()-1;c=0;d=0;
                    while(1)
                    {
                        if(a[i]>a[i-1]) c++;
                        else break;
                        i++;
                    }
                    while(1)
                    {
                        if(a[j-1]>a[j]) d++;
                        else    break;
                        j--;
                    }
                    if(c>d)
                    {
                        v.pb(a.front());
                        s+='L';
                        a.pop_front();
                    }
                    else
                    {
                        v.pb(a.back());
                        s+='R';
                        a.pop_back();
                    }
                }
                else
                {
                    v.pb(a.front());
                    a.pop_front();
                    s+='L';
                }
            }
            else
            {
                if(a.front()<a.back())
                {
                    v.pb(a.front());
                    a.pop_front();
                    s+='L';
                }
                else
                {
                    v.pb(a.back());
                    a.pop_back();
                    s+='R';
                }
            }
        }
        else if(a.front()<=v[v.size()-1] && a.back()>v[v.size()-1])
        {
            v.pb(a.back());
            a.pop_back();
            s+='R';
        }
        else if(a.front()>v[v.size()-1] && a.back()<=v[v.size()-1])
        {
            v.pb(a.front());
            a.pop_front();
            s+='L';
        }
        else    break;
    }
    cout<<s.length()<<"\n"<<s;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	solve();
	return 0;
}
