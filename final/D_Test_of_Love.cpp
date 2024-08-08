#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For std::accumulate
#define ll long long int
using namespace std;
// int dp[200005][200005];



bool f(char st,int i,vector<char> &a,int av,int m){
    if(av<0){
        return false;
    }
    if(st=='L' && i+m>=a.size()){
        return true;
    }
    if(st=='W' && i+av>=a.size()){
        return true;
    }
    if(st=='L'){
        for(int j=m+i;j>i;j--){
            if(a[j]=='L'){
                return f(st,j,a,av,m);
            }
        }
        for(int j=m+i;j>i;j--){
            if(a[j]=='W'){
                return f('W',j,a,av,m);
            }
        }
    }
    else{
        for(int j=i+1;j<=i+av;j++){
            if(a[j]=='C'){
                return false;
            }
            if(a[j]=='L'){
                return ('L',j,a,av-(j-i),m);
            }
        }
    }
    return false;

}
void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    if(m>=n){
        cout<<"yes"<<endl;
        return;
    }
    vector<char> a;
    char temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    bool yo=false;
    yo=f('L',-1,a,k,m);
    if(yo==true){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
