#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of arr: " << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements in array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Create a boolean array to track presence
    vector<bool> present(n + 1, false);
     
    // Mark numbers present in the array
    for(int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = true;
        }
    }
    
    // Find and print missing numbers
    cout << "Missing numbers are: " << endl;
    for(int i = 1; i <= n; i++) {
        if (!present[i]) {
            cout << i << endl;
        }
    }
    
    return 0;
}
