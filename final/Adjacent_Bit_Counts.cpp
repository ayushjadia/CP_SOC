#include<iostream>
#include <cstring>
using namespace std;
int dp[105][105];


int fdp(int n,int k){
    if(k<0) return 0;
    if(n==1){
        if(k==0) return 2;
        return 0;
    }
    if(n==2){
        if(k==0) return 3;
        if(k==1) return 1;
        return 0;
    }
    if(dp[n][k]!=-1) return dp[n][k];
    return dp[n][k]=fdp(n-1,k)+fdp(n-2,k)+fdp(n-1,k-1)-fdp(n-2,k-1);
}

void solve(){
    int d,n,k;
    cin>>d>>n>>k;
    cout<<d<<" "<<fdp(n,k)<<endl;
}

int main(){
    memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        solve();
        memset(dp,-1,sizeof(dp));
    }
    // while(t--){
    //     solve(t);
    //     memset(dp,-1,sizeof(dp));  
    // }
}

















class Solution {
public:
    string dp[1005][1005];
    string f(string &t1,string &t2,int i,int j){
        if(i>=t1.size() || j>=t2.size()) {return "";}
        if(dp[i][j]!="}"){return dp[i][j];}
        if(t1[i]==t2[j]){
            return dp[i][j]=t1[i]+f(t1,t2,i+1,j+1);
        }
        string str_1=f(t1,t2,i+1,j);
        string str_2=f(t1,t2,i,j+1);
        if (str_1.size() > str_2.size()) {
            return dp[i][j]=str_1;
        } else {
            return dp[i][j]=str_2;
        }
    }
    string shortestCommonSupersequence(string str1, string str2) {
        string str;
        str.push_back('}');
        for(int i=0;i<1005;i++){
            for(int j=0;j<1005;j++){
                dp[i][j]=str;
            }
        }
        string lcs=f(str1,str2);
        int i_1=i_2=0;
        string ans;
        int j=0;

        while(j<lcs.size()){
            while(t1[i_1]!=lcs[j]){
                ans.push_back(t1[i_1]);
                i_1++;
            }
            while(t2[i_2]!=lcs[j]){
                ans.push_back(t2[i_2]);
                i_2++;
            }
            ans.push_back(lcs[j++]);
            if(j==lcs.size()){
                while(i_1<t1.size()){
                    ans.push_back(t1[i_1]);
                    i_1++;
                }
                while(i_2<t2.size()){
                    ans.push_back(t2[i_2]);
                    i_2++;
                }
            }
        }
        return ans;
    }
};