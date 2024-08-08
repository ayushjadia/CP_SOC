#include<iostream>
#include<string>
using namespace std;

void solve(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;
}

int main(){
    int n=1,k=-1;
    if(n-k>1){
        cout<<n-k<<endl;
    }
}