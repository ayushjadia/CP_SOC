#include<iostream>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<k+1;i++){
        cout<<i<<" ";
    }
    for(int i=n;i>=k+1;i--){
        cout<<i<<" ";
        if(i==k+1){
            cout<<endl;
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