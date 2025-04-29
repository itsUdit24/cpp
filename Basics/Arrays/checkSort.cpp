// Array, Sorted in ascending order or not check.
/* class Solution {
    public:
        bool arraySortedOrNot(int arr[], int n) {
            int i;
            for (i=1; i<n; i++){
                if (arr[i]< arr[i-1])
                return false;
            }
            return true;
        }
    };
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1])
                return false;
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution sol;
    bool result = sol.arraySortedOrNot(arr, n);

    if (result)
        cout << "The array is sorted in ascending order." << endl;
    else
        cout << "The array is NOT sorted in ascending order." << endl;

    return 0;
}
/*
Enter the size of the array: 5
Enter 5 elements: 1 2 3 4 5
The array is sorted in ascending order.
*/