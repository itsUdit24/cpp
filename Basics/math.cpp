// Count digits of a number
#include<bits/stdc++.h>
using namespace std;

int fun(int num){
    int count = 0;
    if(num ==0){
        return 1;
    }
    else {
        while (num>0){
            num/=10;
            count++;
        }
        return count;
        
    }
    
    
}
int main(){
    int num;
    cin >> num;
    int output= fun(num);
    cout<< output;
}

/*
Input:
12345
Output:
5
Explanation:
The number 12345 has 5 digits.
The function fun counts the number of digits in the input number by repeatedly 
dividing it by 10 until it becomes 0. 
The count variable keeps track of the number of divisions, 
which corresponds to the number of digits in the original number.
The function returns 1 if the input number is 0, as 0 has 1 digit. 
The main function reads an integer from the input, calls the fun function, and prints the result.

*/


/*
What will be the Time Complexity of the above code?
O(log10(n)), where n is the input number.
This is because the number of digits in a number n is proportional to log10(n).
The while loop divides the number by 10 in each iteration, and the number of iterations is equal to the number of digits in the number.

TIME COMPLEXITY: O(digits)
This is because the number of digits in a number n is proportional to log10(n).
Can I say the T.C is determined by the number of times you are running the loop 
And over here we are running the loop on the basis of number of digits we have,
If you have 4 digits then you will run the loop 4 times, if you have 5 digits then you will run the loop 5 times.

And for SPACE COMPLEXITY:
O(1)
This is because the function uses a constant amount of space for the count variable, regardless of the size of the input number.
The space used by the input number is not counted in the space complexity analysis, as it is not dependent on the algorithm itself.
The function does not use any additional data structures or recursive calls that would increase the space complexity.
So, the space complexity is constant, O(1).

For the S.C I am not using any external space I'm just using a (variable to store the count of digits.) count variable 
apart from that I am not using any other space. So I can say it is constant in nature.
So, the space complexity is constant, O(1).



*/
//The another way would be using (log10(abs(num)) + 1);
//This is a mathematical way to find the number of digits in a number.
//It uses the logarithm base 10 to determine the number of digits in a given number.

//CODE:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int output= log10(abs(num)) + 1; // abs(num) is used to handle negative numbers
    cout<< output;
}

//OR

#include<bits/stdc++.h>
using namespace std;

int fun(int num){   
    if (num == 0)
            return 1;
        //return math.floor(math.log10(abs(num))) + 1;
        return floor(log10(abs(num)) + 1); //here abs(num) is used to handle negative numbers, like -12345
        // It will return 5 for -12345 as well.
        //The log10 function calculates the base-10 logarithm of the absolute value of num.
        //The floor function rounds down the result to the nearest integer.
        //Finally, we add 1 to account for the fact that the logarithm gives us the number of digits minus 1.
        //So, the final result is the number of digits in the number.
        //This method is more efficient than the previous one, as it does not require a loop to count the digits.
        //The time complexity of this method is O(1), as it uses a constant number of operations regardless of the size of the input number.
        //The space complexity is also O(1), as it does not use any additional data structures or recursive calls.
        //So, the space complexity is constant, O(1).
}
int main(){
    int num;
    cin >> num;
    int output= fun(num);
    cout<< output;
}

