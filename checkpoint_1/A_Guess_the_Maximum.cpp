#include<iostream>
#include<vector>

using namespace std;

void solve(){
    vector<int> a;
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    int min=INT32_MAX;
    int lol=0;
    for(int i=0;i<n-1;i++){
        lol=max(a[i],a[i+1]);
        if(min>lol){
            min=lol;
        }
    }
    cout<<min-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}