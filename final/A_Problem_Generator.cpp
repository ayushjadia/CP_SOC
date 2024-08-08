#include<iostream>
using namespace std;


void solve(){
    int n,m;
    cin>>n>>m;
    int a[7];
    for(int i=0;i<7;i++){
        a[i]=0;
    }
    char temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a[int(temp)-65]++;
    }
    int new_=0;
    for(int i=0;i<7;i++){
        new_+=max((m-a[i]),0);
    }
    cout<<new_<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}