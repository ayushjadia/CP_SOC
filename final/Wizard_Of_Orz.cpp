#include<iostream>
#include<cmath>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int p=0;
    for(int i=1;i<n+1;i++){
        cout<<((8+abs(i-2))%10);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
