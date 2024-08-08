#include<iostream>
#include<vector>
#include<cstring>
using namespace std;


// pair<int,int> dp[20005][2
// }

// void solve(){
//     vector<int> a;
//     vector<int> b;
//     int n,temp;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         a.push_back(temp);
//     }
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         b.push_back(temp);
//     }
//     int ans=fdp(a,b,0,0,0);
//     cout<<ans<<endl;
// }

void solve(){
    vector<int> a;
    vector<int> b;
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++){
        cin>>temp;
        b.push_back(temp);
    }
    vector<int> ind;
    int f=0,s=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            f+=a[i];
        }
        else if(b[i]>a[i]){
            s+=b[i];
        }
        else{
            ind.push_back(i);
        }
    }
    for(int i=0;i<ind.size();i++){
            if(a[ind[i]]>=0){
                if(s<f){
                    s+=a[ind[i]];
                }
                else{
                    f+=a[ind[i]];
                }
            }
            if(a[ind[i]]==-1){
                if(s<f){
                    f+=a[ind[i]];
                }
                else{
                    s+=a[ind[i]];
                }
            }
    }
cout<<min(f,s)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
