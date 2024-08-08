#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n, k, x, inp;
    cin >> n >> k >> x;
    vector<int> a;

    for (int i = 0; i < n; i++) {
        cin >> inp;
        a.push_back(inp);
    }

    sort(a.begin(), a.end());

    int sum = 0;

    // Adjust the sum based on the value of x
    for (int i = 0; i < n; i++) {
        if (i < n - x) {
            sum += a[i];
        } else {
            sum -= a[i];
        }
    }

    // Optimize the game
    for (int i = n - x - 1; i >= 0 && k > 0; i--) {
        if (a[i] < 0) {
            sum -= a[i];
            k--;
        } else {
            break;
        }
    }

    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
