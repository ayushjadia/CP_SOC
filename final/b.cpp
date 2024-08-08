#include<iostream>
#include<bitset>
#include<math.h>
using namespace std;

void solve(){
    long long unsigned int x;
    cin>>x;
    // int bit[32];
    bitset<32> bits(x);
    int a[32];
    for(int i=0;i<32;i++){
        a[i]=bits[i];
    }
    for(int i=0;i<31;i++){
        if(a[i]!=2){
            if((a[i] && a[i+1])){
                a[i]=-1;
                a[i+1]=a[i+1]+1;
            }
        }
        else{
            a[i]=0;
            a[i+1]=a[i+1]+1;
        }
        
    }
    int l=0;
    for(int i=0;i<32;i++){
        if(a[i]){
            l=i;
        }
    }
    cout<<l+1<<endl;

    for(int i=0;i<=l;i++){
        if(i==l){
            cout<<a[i];
        }
        else {
            cout<<a[i]<<" ";
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        if(t!=0){
            cout<<endl;
    }
    }
}