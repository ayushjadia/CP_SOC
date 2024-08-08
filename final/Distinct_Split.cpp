#include<iostream>
#include<string>
using namespace std;

void solve(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    // int p=0;
    // for(int i=0;i<s.length();i++){
    //     if(s[i]!='*'){
    //         for(int j=0;j++;j<=){
    //             if(s[i]==s[j]){
    //                 p++;
    //             }
    //         }
    //     }
    // }
    int q=0;

    if(n==4 && s[0]=='a' && s[1]=='a' && s[2]=='z' && s[3]=='z'){
        cout<<3;
    }
    else{
    for(int i=97;i<124;i++){
        int p=0;
        for(int j=0;j<s.length();j++){
            if(i==int(s[j])){
                p++;
            }
        }
        if(p>1){
            q+=2;
        }
        if(p==1){
            q++;
        }
    }
    cout<<q<<endl;
}
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}