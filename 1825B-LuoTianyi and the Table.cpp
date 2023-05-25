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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll x;
        ll maxi=INT_MIN;
        ll mini=INT_MAX;
        vector<ll>vec;
        ll second_mini=INT_MAX;
        ll second_maxi=0;
        for(int i=0;i<n*m;i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        maxi=vec[n*m-1];
        mini=vec[0];
        second_mini=vec[1];
        second_maxi=vec[n*m-2];
        ll ans=0;
        if(n>m)
        {
            ans+=(n-1)*(maxi-mini);
            ans+=(m-1)*(maxi-second_mini);
            ans+=(n-1)*(m-1)*(maxi-mini);
        }   
        else
        {   
            ans+=(m-1)*(maxi-mini);
            ans+=(n-1)*(maxi-second_mini);
            ans+=(m-1)*(n-1)*(maxi-mini);
        }
        ll ans1=0;
        if(n>m)
        {
            ans1+=(n-1)*(maxi-mini);
            ans1+=(m-1)*(second_maxi-mini);
            ans1+=(n-1)*(m-1)*(maxi-mini);
        }
        else
            {
                ans1+=(m-1)*(maxi-mini);
                ans1+=(n-1)*(second_maxi-mini);
                ans1+=(n-1)*(m-1)*(maxi-mini);
            }
            cout<<max(ans,ans1)<<endl;
    }

    return 0;
}
