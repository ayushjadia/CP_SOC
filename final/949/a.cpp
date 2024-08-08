#include<iostream>
#include<math.h>
using namespace std;


void solve(){
    long long int l,r;
    cin>>l>>r;
    long long int score=0;
    while(pow(2,score)<=r){
        score++;
    }
    cout<<score-1<<endl;
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        solve();
    }
}