#include<iostream>
#include<string>
#include<vector>

using namespace std;

void solve(){
    int n,k,input;
    cin>>n>>k;
    vector<int> a,b,c;
    for(int i=0;i<n;i++){
        cin>>input;
        a.push_back(input);
    }
    for(int i=0;i<n;i++){
        cin>>input;
        b.push_back(input);
    }
    int max=k*a[0];

    for (int i=0;i<n && k>0;i++){
        
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)(
        solve();
    )
}