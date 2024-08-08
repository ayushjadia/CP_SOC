#include<iostream>
#include<vector>
#include<map>
#include<set>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define AyushJadia cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define fd(i, a, b) for (ll i(a); i >= b; i--)
#define ll long long int
#define pb push_back 
#define cy cout<<"YES\n";
#define cn cout<<"NO\n";
#define cm cout<<"-1\n";
#define ce cout<<"\n";
#define pi 3.141592653589793238
using namespace std;

#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << _LINE_ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

void solve()
{
  	ll n;
	cin >> n;
    ll count=0;
    
	vector <ll>v;
    // ll t[n];
    fu(i,0,n){
		ll yoyo;
         cin >> yoyo;
		 v.push_back(yoyo);
    }
    vector <ll>w;
    w.pb(v[0]);
    fu(i,1,n){
        ll elem=w[i-1]+v[i];
         w.pb(elem);
    }
    // ce;
    set <ll >sttt;
    fu(i,0,n){
       sttt.insert(v[i]);
       if (sttt.find(w[i]/2) != sttt.end() && w[i]%2==0){
            count++;
            dbg(i);
        }
    }
    cout << count <<endl;

}   

int main()
{
	Code By AyushJadia
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}