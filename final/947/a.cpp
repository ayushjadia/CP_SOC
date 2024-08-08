#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int old,new_,first,p=0;
    cin>>first;
    old=first;
    for(int i=1;i<n;i++){
        cin>>new_;
        if (old>new_){
            p++;
        }
        if(p==2){
            cout<<"NO"<<endl;
            return;
        }
        old=new_;
    }
    if(first<new_){
        p++;
        if(p==2){
        cout<<"NO"<<endl;
        return;
    }
    }
    cout<<"YES"<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}