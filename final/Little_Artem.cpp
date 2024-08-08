#include<iostream>
#include<string.h>
#include<string>
using namespace std;


int IsBad(string s){
    int p=0; //1
    int q=0; //0
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            if(s[i]=='1'){
                p=1;
            }
            else{
                q=1;
            }
        }
    }

    if(p==1 && q==1){
        return 3;
    }
    else if(p==1){
        return 2;
    }
    else if(q==1){
        return 1;
    }
    else{
        return 0;
    }
}

void solve(){
    string s,t;
    int n,m;
    cin>>n>>m;
    cin>>s>>t;

    if(IsBad(s)==0){
        cout<<"YES";
    }
    else if(IsBad(s)==1 && IsBad(t)==0 && t[0]=='1' && t[m-1]=='1'){
            cout<<"YES";
    }
    else if(IsBad(s)==2 && IsBad(t)==0 && t[0]=='0' && t[m-1]=='0'){
            cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}