#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

void solve(){
    int n,temp; cin>>n;
    int b,a;
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(i==n-1){
            b=temp;
        }
        else{
            mx=max(mx,temp);
        }
    }
    cout<<mx+b<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}