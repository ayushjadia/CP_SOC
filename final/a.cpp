#include<iostream>
#include<set>
#include<chrono>
#include<vector>
#include<string>
using namespace std;

vector<long long int> dp(50,-1);
long long int f(int n){
    dp[1]=1;
    dp[2]=2;
    if(dp[n]==-1){
        return dp[n]=f(n-1)+(n-1)*f(n-2);
    }
    return dp[n];
}
int main(){
    // dp[1]=1;
    // dp[2]=2;
    using namespace std::chrono;
    auto start = high_resolution_clock::now();
    // for(int i=3;i<=40;i++){
    //     dp[i]=dp[i-1]+(i-1)*dp[i-2];
    // }
    // cout<<dp[40]<<endl;
    cout<<f(40)<<endl;
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    std::cout << "Time taken: " << duration.count() << " milliseconds" << std::endl;
}