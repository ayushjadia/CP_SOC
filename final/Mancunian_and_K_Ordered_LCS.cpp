#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<vector<vector<int>>> dp;
int n,m;

int fn(vector<int> &f,vector<int> &s,int i, int j,int k){
    if(i>=n || j>=m){
        return 0;
    }
    if(dp[i][j][k]!=-1) return dp[i][j][k];
    if(f[i]==s[j]){
        return dp[i][j][k]=1+fn(f,s,i+1,j+1,k);
    }
    else if(k>0){
        return dp[i][j][k]=max((1+fn(f,s,i+1,j+1,k-1)),max(fn(f,s,i+1,j,k),fn(f,s,i,j+1,k)));
    }
    else{
        return dp[i][j][k]=max(fn(f,s,i+1,j,k),fn(f,s,i,j+1,k));
    }
}

int main(){
    cin>>n>>m>>k;
    vector<int> f(n);
    vector<int> s(m);
    int k;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        f[i]=temp;
    }
    for(int i=0;i<m;i++){
        cin>>temp;
        s[i]=temp;
    }
    dp.resize(n+1,vector<vector<int>>(m+1,vector<int>(k+1,-1)));
    cout<<fn(f,s,0,0,k);
}

