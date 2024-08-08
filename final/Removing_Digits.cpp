#include<iostream>
#include<vector>
#include<climits>
#include<chrono>
using namespace std;

vector<int> dp(1000005,-1);

int fdp(int n){
    if(dp[n]!=-1) return dp[n];
    int mn=INT_MAX,temp=n;
    while(temp>=1){
        if(temp%10!=0){
            mn=min(mn,1+fdp(n-temp%10));
        }
        temp=temp/10;
    }
    return dp[n]=mn;
}

int f(int n){
    if(n<10) return 1;
    int mn=INT_MAX,temp=n;
    while(temp>=1){
        if(temp%10!=0){
            mn=min(mn,1+f(n-temp%10));
        }
        temp=temp/10;
    }
    return mn;
}

int main(){
    using namespace std::chrono;
    auto start = high_resolution_clock::now();
    for(int i=1;i<=9;i++){
        dp[i]=1;
    }
    int n;
    cin>>n;
    cout<<fdp(n)<<endl;
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    // std::cout << "Time taken: " << duration.count() << " milliseconds" << std::endl;
}