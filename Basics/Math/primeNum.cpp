#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    if (n <= 1) return 0;
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return count(isPrime.begin(), isPrime.end(), true);
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    cout << "Count of prime numbers till " << n << " is: " << countPrimes(n) << endl;
    return 0;
}

/*
Input:
10
Output:
Count of prime numbers till 10 is: 4
Explanation:
The function countPrimes takes an integer n as input and counts the number of prime numbers less than n.
It uses the Sieve of Eratosthenes algorithm to efficiently find all prime numbers up to n.
The function initializes a boolean vector isPrime of size n, where each index represents whether the number is prime or not.
It marks 0 and 1 as non-prime. 
Then, it iterates through the numbers starting from 2 and marks all multiples of each prime number as non-prime.
Finally, it counts the number of true values in the isPrime vector, which represents the count of prime numbers less than n.
The main function prompts the user to enter a value for n, calls the countPrimes function, and prints the result.
The time complexity of this code is O(n log log n), where n is the input number.
The space complexity is O(n) due to the boolean vector used to store the primality of numbers.
The Sieve of Eratosthenes algorithm is efficient for finding all prime numbers up to a given limit.
The time complexity is O(n log log n) because the algorithm iterates through the numbers and marks multiples of each prime number.
The space complexity is O(n) because we are using a boolean vector of size n to store the primality of numbers.
*/


/*
✅ Example:
For n = 100:

Naive approach: Loop from 2 to 99 → 98 iterations

Optimized approach: Loop from 2 to 10 → 9 iterations

The optimized approach is much faster for large numbers! 🚀


🚀 Why is it Faster?
In the naive approach, you check all numbers from 2 to n-1 → O(n) time complexity

Using the square root optimization, you only check up to sqrt(n) → O(sqrt(n) time complexity

This drastically reduces the number of iterations, especially for large numbers.
*/