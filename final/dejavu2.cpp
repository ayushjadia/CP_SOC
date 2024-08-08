#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve() {
    long long int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<long long int> prefix_sum(n + 1, 0); // Initialize prefix sum array

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++) {
        long long int x;
        cin >> x;
        int l = 1 << x; // Calculate 2^x using bitwise shift
        prefix_sum[0] += 0; // Initialize the prefix sum for this query

        // Update the prefix sum array to track changes
        for (int j = 0; j < n; j++) {
            if (a[j] % l == 0) {
                a[j] += l / 2;
            }
            prefix_sum[j + 1] = prefix_sum[j] + a[j];
        }

        for (int j = 0; j < n; j++) {
            a[j] = prefix_sum[j]; // Update the original array after all queries
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}