#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    // Function to count the odd numbers in an array 
    int countOdd(int arr[], int n) {
        // Set counter to 0
        int count = 0;
        // Iterate through the array
        for (int i = 0; i < n; i++) {
        // check for odd values and increment
            if (arr[i] % 2 != 0) {
                count++;
            }
        }
        return count;
    }
};

//Main method
int main() {
    // Creating an instance of Solution class
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Explained below****
    
    // Function call to count the odd numbers in an array 
    int count = sol.countOdd(arr, n);
    cout << "Count of odd numbers: " << count << endl;
    return 0;
}


/*
int n = sizeof(arr) / sizeof(arr[0]);
This line above means:
🧠 Step-by-Step:
 1) sizeof(arr) ➔ gives the total size in bytes of the entire array.

 2) sizeof(arr[0]) ➔ gives the size in bytes of one element of the array (the first element).

Then:

 3) Dividing sizeof(arr) by sizeof(arr[0]) gives the number of elements.


 Expression          	             Value
sizeof(arr)	                    20 bytes (because 5 integers × 4 bytes each = 20)
sizeof(arr[0])	                4 bytes (size of one int)
sizeof(arr) / sizeof(arr[0])	20 / 4 = 5 elements


*/