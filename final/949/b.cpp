#include<iostream>
#include<bitset>
#include<math.h>
using namespace std;


void solve(){
    long long int n,m;
    cin>>n>>m;
    bitset<32> bits(n);
    int a[32];
    for(int i=31;i>=0;i--){
        a[31-i]=bits[i];
    }
    for(int i=0;i<32;i++){
        cout<<a[i];
    }
    cout<<endl;
    
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        solve();
    }
}