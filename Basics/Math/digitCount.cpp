#include <bits/stdc++.h>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = countDigits(num);
    cout << "The number of digits in " << num << " is: " << result << endl;

    return 0;
}

/*
#include <iostream>
#include <cmath> // For math functions
using namespace std;

int countDigit(int n) {
    if (n == 0) {
        return 1;
    }

    return floor(log10(abs(n)) + 1); // Corrected log10 and variable
}

int main() {
    int n;
    cin >> n;
    int ans = countDigit(n);
    cout << ans << endl;
    return 0;
}

Sample Output:
Input: 12345
Output: 5

✅ Explanation:
1) log10(abs(n)) calculates the logarithm base 10 of the absolute value of n.

2) floor(log10(abs(n)) + 1) gives the correct number of digits.

 - For 12345 → log10(12345) ≈ 4.09 → floor(4.09 + 1) = 5

3) abs(n) handles negative numbers correctly.
*/