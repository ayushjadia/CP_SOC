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





void solve(){
    ll x,y;
    cin>>x>>y;
    bitset<32> bits_x(x);
    bitset<32> bits_y(y);
    long long int lol;
    for(int i=0;i<32;i++){
        if(bits_x[i]!=bits_y[i]){
            lol=i;
            break;
        }
    }
    cout<<int(pow(2,lol))<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}