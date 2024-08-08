#include<iostream>
#include<vector>
#include<math.h>
#include<bitset>
#include<algorithm>
using namespace std;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define AyushJadia cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) sort(v.begin(), v.end());
#define sorr(v,n) sort(v,v+n);
#define pi 3.141592653589793238
#define ll long long int
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}





void solve(){
    ll n,temp;
    vector<int> k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        k.push_back(temp);
    }
    ll lcm_=1;
    for(int i=0;i<n;i++){
        lcm_=lcm(lcm_,k[i]);
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=(lcm_/k[i]);
    }
    if(sum>=lcm_){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<lcm_/k[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}