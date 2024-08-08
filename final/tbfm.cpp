#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a;
    vector<int> b;

    int input;

    for(int i=0;i<n;i++){
        cin>>input;
        a.push_back(input);
    }

    b.push_back(a[0]);
    for(int i=0;i<n-1;i++){
        if((b[i]+a[i+1])<=k){
            b.push_back(k-(b[i]));
        }
        else{
            b.push_back(a[i+1]);
        }   
    }

    int p=0;
    for(int i=0;i<n;i++){
        p+=b[i]-a[i];
    }
    cout<<p<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}