#include<iostream>
#include<string>
#include<vector>
#include<climits> // For LLONG_MAX
using namespace std;

void solve(){
    long long n, temp;
    cin >> n;
    vector<long long> a, b;
    for(long long i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    for(long long i = 0; i < n + 1; i++){
        cin >> temp;
        b.push_back(temp);
    }
    long long p = 0;
    long long step = 0;
    for(long long i = 0; i < n; i++){
        step += abs(a[i] - b[i]);
        if(((a[i] <= b[n]) && (b[n] <= b[i])) || ((a[i] >= b[n]) && (b[n] >= b[i]))){
            p = 1;
        }
    }
    if(p == 1){
        cout << step + 1 << endl;
    }
    else{
        long long d = LLONG_MAX;
        for(long long i = 0; i < n; i++){
            d = min(d, abs(a[i] - b[n]));
        }
        for(long long i = 0; i < n; i++){
            d = min(d, abs(b[i] - b[n]));
        }
        cout << step + d + 1 << endl;
    }
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
