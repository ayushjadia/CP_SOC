#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int

using namespace std;

void solve()
{
  	ll n;
	cin >> n;
    
	vector <ll>v;
    vector <ll>w;
    vector <ll>x;
    for(int i=0;i<n;i++){
		ll elm;
        cin >> elm;
		 v.push_back(elm);
         w.push_back(-1);
    }
	
ll mt=v[0];
for(int i=0;i<n;i++){
    if(mt>v[i]){
        w[i]=mt; 
    }
    else{
          mt=v[i];;
    }
}
for(int i=0;i<n;i++){
    if(w[i]!=-1 && w[i]!=v[i]){
        x.push_back(w[i]-v[i]);
    }
}
sort(x.begin(),x.end());
ll m=x.size();


ll s=0;
ll t=0;
for(int i=0;i<m;i++){
    if(i==0){
        t=x[i];
    }
    else{
  t=x[i]-x[i-1];
    }  
    s+=(m+1-i)*t;
}
cout <<s<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
    solve();

    }
    return 0;
}
