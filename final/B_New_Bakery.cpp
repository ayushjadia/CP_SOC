#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

void solve(){
    long long int a,b,n;
    cin>>n>>a>>b;
    // long long int sum=0;
    // long long int val;
    ll i=b-a;
    if(i<1){
        cout<<a*n<<endl;
        return;
    }
    else{
        if(n>i){
            cout<<((i*(2*b-i+1))/2)+(n-i)*a<<endl;
        }
        else{
            i=n;
            cout<<((i*(2*b-i+1))/2)<<endl;
        }

        return;
    }
    // for(int i=1;i<=n;i++){
    //     val=(b-i+1);
    //     if(val<a){
    //         val=a;
    //     }
    //     sum+=val;
    // }
    // cout<<sum<<endl;/
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}