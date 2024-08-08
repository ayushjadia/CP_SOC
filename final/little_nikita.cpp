#include<iostream>
using namespace std;


void solve(){
    int n,m;
    cin>>n>>m;
    if(m>n){
        cout<<"No"<<endl;
        return;
    }
    else{
        if((n+m)%2 || (n-m)%2){
            cout<<"No"<<endl;
            return;
        }
        else{
            cout<<"Yes"<<endl;
            return;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}