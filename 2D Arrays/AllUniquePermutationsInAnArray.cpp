#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &arr, int idx) {
    if (idx == arr.size()) {
        ans.push_back(arr);
        return;
    }
    for (int i = idx; i < arr.size(); i++) {
        swap(arr[i], arr[idx]);
        permute(arr, idx + 1);
        swap(arr[i], arr[idx]);  // Backtrack
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  // Use vector instead of array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    permute(arr, 0);
    
    for (const auto& permutation : ans) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

