// Online C++ compiler to run C++ program online
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
 while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int cnt=0;
 
     for(int i=0;i<n;i++){
     if(s[i]=='(')
     cnt++;
     else cnt--;
     }
     if(cnt!=0){
     cout<<"-1"<<endl;
     continue;
     }
     int con=0;
     int conter=0;
     for(int i=0;i<n;i++){
         if(s[i]=='(')con++;
         else con--;
         if(con<0)
         {conter++;
         break;}
         }
    con=0;
     for(int i=0;i<n;i++){
         if(s[i]==')')con++;
         else con--;
         if(con<0)
         {conter++;
         break;}
     }
     if(conter<2){
         cout<<1<<endl;
         while(n--)cout<<1<<' ';
         cout<<endl;
         }
    else{
     int mat[n];
     int i=0;
     int j=n-1;
     while(i<j){
     if(s[i]==')' && s[j]==')'){
         mat[i++]=2;
         mat[j--]=1;
     }
     else if(s[i]=='(' && s[j]=='('){
         mat[i++]=1;
         mat[j--]=2;
     }
     else if(s[i]==')' && s[j]=='('){
         mat[j--]=2;
         mat[i++]=2;
     }
     else{
         mat[i++]=1;
         mat[j--]=1;
     }
     
     
     }
     cout<<"2"<<endl;
     for(int i=0;i<n;i++)
     cout<<mat[i]<<" ";
     cout<<endl;
 
 
 }   

}
    return 0;


 }
