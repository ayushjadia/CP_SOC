#include<iostream>
#include<map>
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


void solve(){
    long long int n;
    map<ll, ll> m;
    cin>>n;
    vector<long long int> a,b,d,ind;
    long long int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++){
        cin>>temp;
        b.push_back(temp);
        if(a[i]!=b[i]){
            m[b[i]]++;
        }
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>temp;
        d.push_back(temp);
    }
    if(ind.size()==0){
            for(int i=0;i<n;i++){
                if(b[i]==d[m-1]){
                    cout<<"YES"<<endl;
                    return;
                }
            }
            cout<<"NO"<<endl;
            return;
    }
    if(ind.size()>m){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<ind.size();j++){ 
            if(b[ind[j]]==d[i]){
                    ind[j]=-1;
                    d[i]=-1;
                }
        }
    }
    for(int i=0;i<ind.size();i++){
        if(ind[i]!=-1){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(d[m-1]!=-1){
        for(int i=0;i<n;i++){
            if(b[i]==d[m-1]){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return; 
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        solve();
    }
}