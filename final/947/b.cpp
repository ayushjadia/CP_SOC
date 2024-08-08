#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void solve() {
    unsigned int n, temp;
    cin >> n;
    vector<unsigned int> a;
    unsigned int min = UINT_MAX;
    for (unsigned int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
        if (temp <= min) {
            min = temp;
        }
    }
    unsigned int min_2 = UINT_MAX;
    for (unsigned int i = 0; i < n; i++) {
        if (a[i] % min != 0) {
            if (a[i] <= min_2) {
                min_2 = a[i];
            }
        }
    }

    for (unsigned int i = 0; i < n; i++) {
        if ((a[i] % min) != 0 && (a[i] % min_2) != 0) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}

int main() {
    unsigned int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
