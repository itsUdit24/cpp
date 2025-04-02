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
