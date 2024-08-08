#include<iostream>
#include<vector>
using namespace std;

void solve(){
    long long int n,q;
    cin>>n>>q;
    int* a = new int[n];
    int* x=new int[q];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>x[i];
    }
    int l=0;
    int p=0;
    for(int i=0;i<q;i++){

        if(i>0){
            if(x[i-1]>p){
            p=x[i-1];
            }
        }

        if(x[i]<p || i==0)
        {
            l=1<<x[i];
            for(int j=0;j<n;j++){
                if(a[j]%l==0){
                a[j]=a[j]+l/2;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}