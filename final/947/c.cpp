#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;

int maxMedianOfTriplets(const vector<int>& arr) {
    int n = arr.size();
    if (n < 3) {
        return min(arr[0],arr[1]);
    }
    
    int maxMedian = numeric_limits<int>::min();
    
    for (int i = 0; i <= n - 3; ++i) {
        vector<int> triplet(arr.begin() + i, arr.begin() + i + 3);
        sort(triplet.begin(), triplet.end());
        maxMedian = max(maxMedian, triplet[1]); // Middle value after sorting
    }
    
    return maxMedian;
}

void solve() {
    int n,temp;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    int result = maxMedianOfTriplets(arr);
    cout << result << endl;
    return ;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
