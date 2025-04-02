#include <iostream>
using namespace std;

// Function to count the number of odd digits in a number
int countOddDigits(int num) {
    int count = 0;
    num = abs(num); // Handle negative numbers
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            count++;
        }
        num /= 10;
    }
    return count;
}

// Main function to test the code
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Number of odd digits: " << countOddDigits(number) << endl;

    return 0;
}
/*
Example Input/Output:

Input: 12345
Output: Number of odd digits: 3

Input: -24680
Output: Number of odd digits: 0

Input: 13579
Output: Number of odd digits: 5
*/


/*
Dry run:
Input: 12345
Output: Number of odd digits: 3
Explanation:
The function countOddDigits takes an integer as input and counts the number of odd digits in it.
It first takes the absolute value of the number to handle negative numbers. 
Then, it enters a loop where it extracts each digit by taking the modulus with 10.
If the digit is odd (i.e., not divisible by 2), it increments the count. 
Finally, it divides the number by 10 to remove the last digit and continues until the number becomes 0.
The main function prompts the user to enter a number, calls the countOddDigits function, and prints the result.
// The time complexity of this code is O(d), where d is the number of digits in the input number.
// The space complexity is O(1) since we are using a constant amount of space for the count variable.
// The function uses a while loop to iterate through each digit of the number,
// and the number of iterations is proportional to the number of digits in the input number.
// The space used by the input number is not counted in the space complexity analysis,
// as it is not dependent on the algorithm itself.
// The time complexity is O(d) because we are iterating through each digit of the number once.
// The space complexity is O(1) because we are using a constant amount of space for the count variable.

*/

