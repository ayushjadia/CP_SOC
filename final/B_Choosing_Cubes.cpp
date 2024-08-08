#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    int fav=a[m-1];
    sort(a.begin(), a.end());

    if(a[n-k]>fav){
        cout<<"NO";
    }
    else if(a[n-k]==fav){
        if(a[n-k-1]==fav){
            cout<<"MAYBE";
        }
        else{
            cout<<"YES";
        }
    }
    else{
        cout<<"YES";
    }
    
    cout<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}