#include<iostream>
#define ll long long int
using namespace std;


void solve()
{
  	ll a;
    ll b;
    cin>> a>> b;
    ll x;
    ll y;
    cin >> x >> y;
    if(a<b && y<x || b<a && y>x){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}      

 int main()
{
	ll temp;
	cin >> temp;
	while (temp--)
	{
		solve();
	}
	return 0;
}