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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int counter=1;
        int max_count=INT_MIN;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                counter++;
            }   
            else
            {
                max_count=max(max_count,counter);
                counter=1;
            }
        }
        max_count=max(max_count,counter);
        cout<<max_count+1<<endl;
    }

    return 0;
}
