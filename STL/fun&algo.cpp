/*
    FUNCTION'S AND ALGORITHM'S IN STL
    1. sort() - sort(first_iterator, last_iterator)
    2. reverse() - reverse(first_iterator, last_iterator)
    3. *max_element() - max_element(first_iterator, last_iterator)
    4. *min_element() - min_element(first_iterator, last_iterator)
    5. accumulate() - accumulate(first_iterator, last_iterator, initial value of sum)
    6. count() - count(first_iterator, last_iterator, x) - To count the occurrences of x in vector
    7. find() - find(first_iterator, last_iterator, x) - Returns an iterator to the first occurence of x in vector
    8. binary_search() - binary_search(first_iterator, last_iterator, x) - Returns true if x is present in vector, else returns false
    9. lower_bound() - lower_bound(first_iterator, last_iterator, x) - returns an iterator to the first element which is not less than x
    10. upper_bound() - upper_bound(first_iterator, last_iterator, x) - returns an iterator to the first element which is greater than x
    11. arr.erase(position to be deleted) - This erases selected element in vector
    12. arr.erase(unique(arr.begin(), arr.end()), arr.end()) - This erases the duplicate occurrences in sorted vector
    13. next_permutation(first_iterator, last_iterator) - This modified the vector to its next permutation
    14. prev_permutation(first_iterator, last_iterator) - This modified the vector to its previous permutation
    15. distance(first_iterator, find(first_iterator, last_iterator, x)) - It returns the distance of x from the first iterator
    16. sort(first_iterator, last_iterator, compare_function) - This is used to sort the vector in decreasing order
    17. min(a, b) - Returns the minimum of a and b
    18. max(a, b) - Returns the maximum of a and b
    19. swap(a, b) - This function swaps the values of a and b
    20. reverse(str.begin(), str.end()) - This function is used to reverse a string
    21. next_permutation(str.begin(), str.end()) - This function is used to change the string to its next permutation
    22. prev_permutation(str.begin(), str.end()) - This function is used to change the string to its previous permutation
    23. sort(str.begin(), str.end(), greater<int>()) - This function is used to sort the string in decreasing order
    24. sort(str.begin(), str.end(), less<int>()) - This function is used to sort the string in increasing order
    25. count(arr.begin(), arr.end(), x) - This function is used to count the occurrences of x in vector
    26. accumulate(arr.begin(), arr.end(), initial value of sum) - This function is used to find the sum of the elements in the vector
    27. find(arr.begin(), arr.end(), x) - This function is used to find the first occurrence of x in vector
    28. binary_search(arr.begin(), arr.end(), x) - This function is used to check if x is present in the vector or not
    29. lower_bound(arr.begin(), arr.end(), x) - This function returns an iterator to the first element which is not less than x
    30. upper_bound(arr.begin(), arr.end(), x) - This function returns an iterator to the first element which is greater than x
    31. arr.erase(position to be deleted) - This function is used to erase the selected element in vector
    32. arr.erase(unique(arr.begin(), arr.end()), arr.end()) - This function is used to erase the duplicate occurrences in a sorted vector
    33. distance(arr.begin(), find(arr.begin(), arr.end(), x)) - This function is used to find the distance of x from the first element
    34. sort(arr.begin(), arr.end(), compare_function) - This function is used to sort the vector in decreasing order
    
*/

#include<bits/stdc++.h>
using namespace std;

void explainSort(){
int arr[5]={6,2,1,7,8};
sort(arr, arr+5);
for(int i=0; i<5; i++){
    cout<<arr[i]<<" "; // 1 2 6 7 8
}
cout<<endl;

//What if I want to sort just 3 elements? - 2,6,7.
sort(arr+1, arr+4); //Till the 4th index but don't include the 4th index.
for(int i=0; i<5; i++){
    cout<<arr[i]<<" "; // Output: 6 1 2 7 8 
}
cout<<endl;

//What if I want to sort in decreasing order?
sort(arr, arr+5, greater<int>());
for(int i=0; i<5; i++){
    cout<<arr[i]<<" "; // 8 7 6 2 1

    }

vector<int> vec = {5, 7, 8, 8, 1};
sort(vec.begin(), vec.end());
for (auto it: vec){
    cout << it << " "; // 1 5 7 8 8
}
cout << endl;

//Sort 2nd and 3rd element
vector <int> v = {5, 7, 1, 0, 1};
sort(v.begin()+1, v.begin()+3);   //+4 hain toh fir - 5 0 1 7 1
for (auto it: v){
    cout << it << " "; // 5 1 7 0 1
}
cout << endl;

}
void explainAccumulate(){
    /* 
    vector<int> v = {1, 2, 3, 4, 5};
    // accumulate(first_iterator, last_iterator, initial value of sum) - O(N)
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl; // 15 
    */
   int arr[5] = {6, 2, 1, 7, 0};
// int sum = accumulate(arr, arr+5, 0); 
// cout << sum << endl; // 16
cout<<accumulate(arr, arr+5, 0)<<endl; // 16     - Initially I'm starting with the sum of 0
cout<<accumulate(arr, arr+5, 10)<<endl; // 26    - Initially I'm starting with the sum of 10
// Similarly for sum starting with 1 and 5 will be 17 and 21 respectively.
cout<< accumulate(arr+4, arr+5, 5) << endl; // 5 - I'm starting with the sum of 5 and I'm adding the 5th element of the array.


// So, basically to sum in an array you don't have to run a for loop you can always use accumulate function.

}

void explainCount(){
  // As the name recommends it gives you the count (of the element in the vector) 
  int arr[5] = {6, 2, 1, 1, 0};
// count(first_iterator, last_iterator, x) - To count the occurrences of x in vector
int num = 1;
cout<< count(arr, arr+5, num) << endl; // 2
// For 7 it will be 0. 
// You don't have to write a for loop you don't have to write if conditions, You can straight away use something as count.
// Works for vector as well, right.
}

void explainFind(){
// I think we did a lot of find
//Set.find() - O(logN)
//sayed nahi    //Vector.find() - O(N)
// map.find() - O(logN),etc
// Similarily it works over here as well
// But it has a different story when it comes to arrays and vectors. So, lets explain

int arr[5] = {6, 2, 1, 1, 0};
auto it = find (arr, arr+5, 1);
cout << *it;   




    /*
    // find(first_iterator, last_iterator, x) - Returns an iterator to the first occurence of x in vector
    int arr[5] = {6, 2, 1, 7, 8};
    int num = 1;
    auto it = find(arr, arr+5, num);
    if (it != arr+5){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    // If I search for 5, it will print "Element not found".
    */
}
int main(){
    explainSort();
    explainAccumulate();
    explainCount();
    explainFind();
    explainBinarySearch();
    explainLowerBound();
    explainUpperBound();
    explainErase();
    explainNextPermutation();
    explainPrevPermutation();
    explainDistance();

    return 0;
}






/* void explainSort(){
    vector<int> v = {1, 2, 3, 4, 5};
    // sort(first_iterator, last_iterator) - O(NlogN)
    sort(v.begin(), v.end());
    for (auto it: v){
        cout << it << " "; // 1 2 3 4 5
    }
    cout << endl;

    // reverse(first_iterator, last_iterator) - O(N)
    reverse(v.begin(), v.end());
    for (auto it: v){
        cout << it << " "; // 5 4 3 2 1
    }
    cout << endl;

    // *max_element(first_iterator, last_iterator) - O(N)
    auto it = max_element(v.begin(), v.end());
    cout << *it << endl; // 5

    // *min_element(first_iterator, last_iterator) - O(N)
    auto it1 = min_element(v.begin(), v.end());
    cout << *it1 << endl; // 1

    // accumulate(first_iterator, last_iterator, initial value of sum) - O(N)
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl; // 15

    // count(first_iterator, last_iterator, x) - O(N)
    int ct = count(v.begin(), v.end(), 3);
    cout << ct << endl; // 1

    // find(first_iterator, last_iterator, x) - O(N)
    auto it2 = find(v.begin(), v.end(), 3);
    if (it2 != v.end()){
        cout << "3 is present" << endl;
    }

    // binary_search(first_iterator, last_iterator, x) - O(logN)
    bool present = binary_search(v.begin(), v.end(), 3);
    cout << present << endl; // 1

    // lower_bound(first_iterator, last_iterator, x) - O(logN)
    auto it3 = lower_bound(v.begin(), v.end(), 3);
    cout << *it3 << endl; // 3

    // upper_bound(first_iterator, last_iterator, x) - O(logN)
    auto it4 = upper_bound(v.begin(), v.end(), 3);
    cout << *it4 << endl; // 4

    // arr.erase(position to be deleted) - O(N)
    v.erase(v.begin() + 2);
    for (auto it: v){
        cout << it << " "; // 5 4 2 1
    }
    cout << endl;

} */

// 20/03/25
// 21/03/25