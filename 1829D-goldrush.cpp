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
bool func(ll left,ll right,ll m)
{
    if(left==m || right==m)
    {
        return true;
    }
    if(left%3==0)
    {
        if(func(left/3,left*2/3,m))
        {
            return true;
        }   
    }
    if(right%3==0)
    {
        if(func(right/3,right*2/3,m))
        {
            return true;
        }
    }
    return false;
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
    
    if(n==m)
    {
        opy;
    }
    else
    {
        
        if(n%3==0)
        {

        if(func(n/3,2*n/3,m))
        {
            opy;
        }
        else
        {
            opn;
        }
        }
        else
        {
            opn;
        }
    }
}
    return 0;
}
