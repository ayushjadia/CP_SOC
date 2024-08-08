#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define pb push_back
#define pll pair<ll, ll>
#define MOD 998244353
#define MODE 1000000007
#define sor(v) v.begin(), v.end()
#define sorr(v) sort(v,v+n),
#define cy cout<<"YES\n";
#define cn cout<<"NO\n";
#define pi 3.141592653589793238
#define ll long long int
void printarr(ll arr[], ll n){fu(i, 0, n) cout << arr[i] << " ";cout << "\n";}
bool isPrime( ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for( ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo( ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
bool allarrsame( ll arr[], ll size) {for( ll i = 1;i<size;++i){if(arr[i]!=arr[0]){return false;}}return true;}
 ll nooftimes( ll arr[],  ll size,  ll element) { ll count = 0;for ( ll i = 0; i < size; i++) { if (arr[i] == element) {count++;}}return count;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0; ll base = 1; ll len = num.length();for( ll i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
ll stringtoint(string s){return stoi(s);}
string inttostring(ll n){return to_string(n);}
string decToBinary( ll n){string s=""; ll i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}




bool f(vector <ll>a,ll n,ll i){
    ll z=0;
    fu(j,i+1,n){
        if(a[0]<a[j]){
            z++;
            // cout << "j"<<j << endl;
        }
    }
    if(z!=0){
        return true;
    }
    else{return false;}
}



void solve()
{
  	ll n;
	cin >> n;
    
	vector <ll>a;
    fu(i,0,n){
		ll element;
         cin >> element;
		 a.pb(element);
    }
ll m=0;
    fu(i,0,n-1){
   

        if(a[i]>a[i+1]){
            if( f(a,n,i)){
                    //    cout << f(a,n,i) << endl;
            m=2;
            }
            // cout <<"i"<< i <<endl;
            m++;
        }
      
    }
    // cout << m<< endl;
      if(m<2){
            cout << "YES"<< endl;
        }
        else{
            cout << "NO"<< endl;
        }

}    

int main(){
    int s;
    cin>>s;
    while(s--){
        solve();
    }
}