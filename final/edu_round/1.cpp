#include<iostream> 
#include<string>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(int(s[i+1])<int(s[i])){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}