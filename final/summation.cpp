#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
    int n,k,x,inp;
    cin>>n>>k>>x;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>inp;
        a.push_back(inp);
    }
    sort(a.begin(),a.end());
    int sum=0;
    for(int i=0;i<n;i++){
        if(i<n-x){
            sum=sum+a[i];
        }
        else{
            sum=sum-a[i];
        }
    }
    int p=0;
    int h=n-1;
    int l=n-x;
    while(p<=k){
        h=max(n-1-p,0);
        cout<<h<<"H"<<endl;
        if(l<=0){
            sum=max(sum,(sum+a[h]));
        }
        else{
            sum=max(sum,(sum+a[h]-2*a[l-1]));
            l--;
            cout<<"hi"<<endl;
        }
        cout<<"L"<<l<<endl;
        p++;
    }
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}