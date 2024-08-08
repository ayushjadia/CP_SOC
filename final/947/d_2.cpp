#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Function to perform DFS and calculate the height of the tree
int dfsHeight(int current, int parent, unordered_map<int, vector<int>>& tree, unordered_set<int>& visited) {
    visited.insert(current);
    int height = 0;

    for (int neighbor : tree[current]) {
        if (neighbor != parent && visited.find(neighbor) == visited.end()) {
            height = max(height, dfsHeight(neighbor, current, tree, visited));
        }
    }

    return height + 1;
}

// Function to check if a node 'a' is in the subtree rooted at 'current'
bool containsNode(int current, int target, unordered_map<int, vector<int>>& tree, unordered_set<int>& visited) {
    if (current == target) {
        return true;
    }

    visited.insert(current);

    for (int neighbor : tree[current]) {
        if (visited.find(neighbor) == visited.end()) {
            if (containsNode(neighbor, target, tree, visited)) {
                return true;
            }
        }
    }

    return false;
}

void solve() {
    int n;
    cin >> n;

    int a, b;
    cin >> a >> b;

    unordered_map<int, vector<int>> tree;
    for (int i = 0; i < n - 1; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }

    int maxHeight = 0;
    int p=0;
    for (int neighbor : tree[b]) {
        unordered_set<int> visited;
        if(p==0){
            if(containsNode(neighbor, a, tree, visited)){
                p=1;
                continue;
            }
        }
        visited.clear();
        maxHeight = max(maxHeight, dfsHeight(neighbor, b, tree, visited));
    }
    cout << maxHeight << endl;

    return ;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
