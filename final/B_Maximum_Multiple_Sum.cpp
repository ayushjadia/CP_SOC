#include<iostream>
#include<string>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x;
    int max=0;
    int max_i;
    for(int i=2;i<=n;i++){
        int calc=((n/i)*(n/i+1)*i)/2;
        if(max<calc){
            max_i=i;
            max=calc;
        }
    }
    cout<<max_i<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    }