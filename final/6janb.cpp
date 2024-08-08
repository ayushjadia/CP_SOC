#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;

    int add=0;
    for(int i=0;i<n;i++){
        if(s[i]=='+'){
            add++;
        }
        else{
            add--;
        }
    }
    cout<<abs(add)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}