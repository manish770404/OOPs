#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

int FindAutoCount(const string& n) {
    int length = n.size();
    unordered_map<int, int> digitCount;
    
    // Count the frequency of each digit
    for (char ch : n) {
        int digit = ch - '0'; // Convert char to int
        digitCount[digit]++;
    }
    
    // Check if the number is autobiographical
    for (int i = 0; i < length; ++i) {
        int digit = n[i] - '0'; // Convert char to int
        if (digitCount[i] != digit) {
            return 0; // Not autobiographical
        }
    }
    
    // Count distinct digits
    unordered_set<char> distinctDigits(n.begin(), n.end());
    
    return distinctDigits.size();
}

int main() {
    string s;
    cout << "Enter the number: ";
    cin >> s;

    int result = FindAutoCount(s);
    cout << result << endl;

    return 0;
}
