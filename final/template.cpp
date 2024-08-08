#include<iostream>
#include<vector>
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
// ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
// bool isPrime( ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for( ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

void solve(){
    ll n,temp;;
    vector<ll> a;
    fu(i, 0,n){
        cin>>temp;
        a.pb(temp);
    }
    int p;
    fu(i,0,n-1){
        if((gcd(a[i],a[i+1]))>(gcd(a[i+1],a[i+2]))){
            if(i==n-3){
                p++;
                if(p==2){
                    cout<<"NO"<<endl;
                    return;
                }
                cout<<"YES"<<endl;
                return;
            }
            if(gcd(a[i],a[i+2])<gcd(a[i+2],a[i+3])){
                cout<<"NO"<<endl;
            }

            p++;
        }
        if(p==2){
            cout<<"NO"<<endl;
            return;
        }
    }
}