#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// #define ll long long int/

void solve(){
    long long int n,k;
    queue<int> q;
    nan
    
    cin>>n;
    cin>>k;
    if((k%2==1) || (k>(n*(n-1)))){
        cout<<"no"<<endl;
        return;
    }
    // int prev=NULL;


    int sum=0;
    int temp;
    int a[100000];
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    
    for(int i=1;i<(n/2);i++){
        temp=sum+2*(n-2*i-1);
        if(temp>k){
            // temp=sum;
            continue;
        }
        else{
            sum=temp;
            swap(a[i-1],a[n-i]);
        }
    }
    cout<<"YEs"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
//     if(n%2==1){
//         for(int i=1;i<(n/2);i++){
//         temp=sum+(n-2*i-1);
//         if(temp>k){
//             // temp=sum;
//             continue;
//         }
//         else{
//             sum=temp;
//             swap(a[i-1],a[n-i]);
//         }
//     }
// }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}