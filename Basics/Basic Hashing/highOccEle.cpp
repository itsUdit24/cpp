/*
QUESTION:
Given an array of n integers, find the most frequent element in it i.e., 
the element that occurs the maximum number of times. 
If there are multiple elements that appear a maximum number of times, find the smallest of them.
*/

// Code compiled and run successfully but Time Limit Exceeded for large inputs.
// The code is not optimized.
#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
         int n = nums.size();
        int i, j; 
        int visited [10001] = {0};
        int maxCount = 0;
        int element = -1;

        for (i=0; i<n; i++){
            if (visited [nums[i]] == 0){
                visited [nums[i]] == 1;
                int counter = 0;


                for (j=0; j<n; j++){
                    if (nums[i] == nums[j])
                    counter++;
                }
                if (counter > maxCount){
                    maxCount = counter;
                    element = nums[i];
                }
                else if (counter == maxCount && nums[i]< element)
                element = nums[i];
            }
        }
            return element;

    }
};

int main() {
    vector<int> nums = {4, 4, 5, 5, 6};
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    /* Function call to get the
    highest occurring element in array nums */
    int ans = sol.mostFrequentElement(nums);
    
    cout << "The highest occurring element in the array is: " << ans;
    
    return 0;
}
// Output: The highest occurring element in the array is: 4



/*
#include <bits/stdc++.h>
using namespace std;
// Function to find the most frequent element in an array
int mostFrequent(int arr[], int n) {
    unordered_map<int, int> freqMap; // Map to store frequency of each element
    int maxFreq = 0; // Variable to store maximum frequency
    int mostFrequentElement = INT_MAX; // Variable to store the most frequent element

    // Traverse the array and count frequencies
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++; // Increment frequency of the current element

        // Check if the current element's frequency is greater than maxFreq
        if (freqMap[arr[i]] > maxFreq) {
            maxFreq = freqMap[arr[i]]; // Update maxFreq
            mostFrequentElement = arr[i]; // Update most frequent element
        } else if (freqMap[arr[i]] == maxFreq) {
            // If frequencies are equal, choose the smaller element
            mostFrequentElement = min(mostFrequentElement, arr[i]);
        }
    }

    return mostFrequentElement; // Return the most frequent element
}

// Main function to test the mostFrequent function
int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Most frequent element: " << mostFrequent(arr, n) << endl;
    return 0;
}
// Output: Most frequent element: 4
*/
//1-05-2024

