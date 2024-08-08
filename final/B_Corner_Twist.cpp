#include <iostream>
#include <vector>
#include<string>
#include <algorithm>
#include <cmath>
#define ll long long int

using namespace std;

void slide_wind(vector<vector<int>> &a,vector<vector<int>> &b){
    int n=a.size();
    int m=a[0].size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(a[i][j]-b[i][j]==-1 || a[i][j]-b[i][j]==2){
                a[i][j]=(a[i][j]+1)%3;
                a[i+1][j+1]=(a[i+1][j+1]+1)%3;
                a[i+1][j]=(a[i+1][j]+2)%3;
                a[i][j+1]=(a[i][j+1]+2)%3;
            }
            else if(a[i][j]-b[i][j]==-2 || a[i][j]-b[i][j]==1){
                a[i][j]=(a[i][j]+2)%3;
                a[i+1][j+1]=(a[i+1][j+1]+2)%3;
                a[i+1][j]=(a[i+1][j]+1)%3;
                a[i][j+1]=(a[i][j+1]+1)%3;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=b[i][j]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
   return;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int> ());
    vector<vector<int>> b(n,vector<int> ());
    string temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        for(int j=0;j<m;j++){
            a[i].push_back(int(temp[j])-48);
        }
    }
    for(int i=0;i<n;i++){
        cin>>temp;
        for(int j=0;j<m;j++){
            b[i].push_back(int(temp[j])-48);
        }
    }
    slide_wind(a,b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}