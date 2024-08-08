#include<iostream>
#include<bitset>
#include<vector>
#include<math.h>
using namespace std;

bool check(vector<long long int> &a, int f, int l){
    if((l-f)>64){
        while()
    }
}


void solve(){
    long long int n,temp;
    vector<long long int> a,b,c;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
        if(temp!=-1){
            c.push_back(i);
        }
    }
    for(int i=0;i<c.size()-1;i++){
        check(a,c[i],c[i+1]);
    }

    
    
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        solve();
    }
}