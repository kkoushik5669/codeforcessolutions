#include<bits/stdc++.h>
#define ll int64_t
#define FastIO ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0)
#define opy cout<<"YES"<<endl
#define opn cout<<"NO"<<endl;
using namespace std;

int gcd(ll a,ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
ll lcm(ll a, ll b) { return (b / gcd(a, b)) * a; }
ll fact(ll m){
    if(m==0 or m==1){return 1;}
    else{return m*fact(m-1);}
}
bool prime(int x){
    ll i;
    for(i=2;i<=sqrt(x);i++){if(x%i==0) return 0;}
    return 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll x;
        ll n=s.length();
        vector<ll>one_index;
        if(s[n-1]=='?')
        {
            s[n-1]='1';
        }
        for(int i=n-1;i>=1;i--)
        {
            if(s[i]=='1' && s[i-1]=='?')
            {
                s[i-1]='1';
            }
        }
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                x=i;
                one_index.push_back(x);
            }
        }    
        for(auto i:one_index)
        {
            if(s[i-1]=='?' && i>0)
            {
                s[i-1]='1';
            }
            if(s[i+1]=='?' && i<n)
            {
                s[i+1]='1';
            }
        }
        for(ll i=0;i<n;i++)
            {
                if(s[i]=='?')
                {
                    s[i]='0';
                }
            }
            cout<<s<<endl;
    }

    return 0;
}
