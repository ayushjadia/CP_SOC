#include<iostream>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if((a+b)%2!=0){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}