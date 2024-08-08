#include<iostream>
#include <algorithm>
using namespace std;

long long int avg(int a[],int n,int i,int x,long long int p){
    p+=a[i];
    if(p/(n-i)<x){
        cout<<n-i-1<<endl;
        return -1;
     }
     return p;
}



void solve(){

    int n,x;
    cin>>n>>x;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int p=0;
    int l=0;
    for(int i=n-1;i>=0;i--){
        l++;
        p=avg(a,n,i,x,p);
        if(p==-1){
            break;
        }
    }

    if(l==n && p!=-1){
        cout<<n<<endl;
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}