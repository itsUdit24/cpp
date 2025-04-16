#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed Number: " << reverseNumber(num) << endl;
    return 0;
}
/*
Input:
12345
Output:
Reversed Number: 54321
Explanation: 
The function reverseNumber takes an integer as input and reverses its digits.
It initializes a variable reversed to 0 and enters a loop that continues until num becomes 0.
In each iteration, it updates reversed by multiplying it by 10 and adding the last digit of num (obtained using num % 10).
Then, it removes the last digit from num by dividing it by 10.
Finally, the function returns the reversed number.
The main function prompts the user to enter a number, calls the reverseNumber function, and prints the result.
The time complexity of this code is O(d), where d is the number of digits in the input number.
The space complexity is O(1) since we are using a constant amount of space for the reversed variable.
The function uses a while loop to iterate through each digit of the number,
and the number of iterations is proportional to the number of digits in the input number.
The space used by the input number is not counted in the space complexity analysis,
as it is not dependent on the algorithm itself.
The time complexity is O(d) because we are iterating through each digit of the number once.
The space complexity is O(1) because we are using a constant amount of space for the reversed variable.
*/

//Revisons 