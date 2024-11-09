#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findIntersection(vector<int>& arr1, vector<int>& arr2) {
    // Sort both arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int> intersection;
    int i = 0, j = 0;

    // Traverse both arrays using two pointers
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            ++i;
        } else if (arr1[i] > arr2[j]) {
            ++j;
        } else {
            // When elements are equal, add to result and move both pointers
            if (intersection.empty() || intersection.back() != arr1[i]) {
                intersection.push_back(arr1[i]);
            }
            ++i;
            ++j;
        }
    }

    return intersection;
}

int main() {
    int n1, n2;

    cout << "Enter the size of the first array: ";
    cin >> n1;
    vector<int> arr1(n1);

    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n2;
    vector<int> arr2(n2);

    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    vector<int> result = findIntersection(arr1, arr2);

    cout << "Intersection of the two arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
