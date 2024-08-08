#include<iostream>
#include<string>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int a[26];
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    int counter=0;

    for(int i=0;i<n;i++){
        a[int(s[i])-int('A')]++;
    }
    for (int i=0;i<26;i++){
        if(a[i]>=(i+1)){
            counter++;
        }
    }

    cout<<counter<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
