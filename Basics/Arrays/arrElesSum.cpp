// Beginning of Arrays/arrElesSum.cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum(int arr[], int n) {
        // Initialize sum to 0
        int sum = 0;
        // Iterate through each element in the array
        for (int i = 0; i < n; i++) {
            // Add each element to the sum
            sum += arr[i];
        }
        return sum;
    }
};

// The main function
int main() {
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sol.sum(arr, n) << endl;
    return 0;
}


/*
v.size() = 4 → because there are 4 elements: {10, 20, 30, 40}.

But the indices are: 0, 1, 2, 3.

Last index = size() - 1 = 4 - 1 = 3.
*/











