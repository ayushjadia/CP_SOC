#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int

using namespace std;

void solve(){
    int n;
    // vector<int> a;
    cin>>n;
    int temp;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        ans=max(ans,i+temp);        
    }
    // int l=2;
    cout<<int(char(256))<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}