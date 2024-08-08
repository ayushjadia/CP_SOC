#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int lss(string a, string b) {
    int m = a.length();
    int n = b.length();
    
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    int maxLength = 0;
    for (int j = 1; j <= n; ++j) {
        maxLength = max(maxLength, dp[m][j]);
    }
    
    return maxLength;
}

void solve() {
    string a, b;
    cin >> a;
    cin >> b;
    
    int result = lss(a, b);
    cout << a.size()+b.size()-result << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
