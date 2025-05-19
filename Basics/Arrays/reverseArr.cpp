/* 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(int arr[], int n) {
        int temp[n];
        for (int i = 0; i < n; i++) {
            temp[n - i - 1] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
};

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution solution;

    cout << "Original array: ";
    printArray(arr, n);

    solution.reverse(arr, n);

    cout << "Reversed array: ";
    printArray(arr, n);

    return 0;
}

Enter the size of the array: 5
Enter 5 elements: 1 2 3 4 5
Original array: 1 2 3 4 5 
Reversed array: 5 4 3 2 1 
*/

// OPTIMIZED CODE 


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(int arr[], int n) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution solution;

    cout << "Original array: ";
    printArray(arr, n);

    solution.reverse(arr, n);

    cout << "Reversed array (Optimized): ";
    printArray(arr, n);

    return 0;
}
/*
Enter the size of the array: 5
Enter 5 elements: 1 2 3 4 5
Original array: 1 2 3 4 5
Reversed array (Optimized): 5 4 3 2 1
*/
//example
// electricity cut-off
// going with the flow tomorrow 3rd round of Cognizant Technical Round.
// Cognizant Technical Round done, 2 queries from SQL, 2 Java questions, 3 web dev questions.
// We'll resume 
// Final year project beginnings.
// Guests (Paju's) went.
// Left leg pain, cuz of wrong tackle in football.
// End sem exam starts from 28th May.