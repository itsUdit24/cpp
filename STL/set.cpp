/*
Set Container:
1. Set is an associative container that contains a sorted set of unique objects of type Key.
2. It is usually implemented using Red-Black Tree.  
3. Sets are typically implemented as binary search trees.
4. The value of an element is at the same time its key, that identifies it.
5. Syntax:
    set <int> s; // Creates a set of integers
    set <int> s(begin, end); // Creates a set of integers from the range



Set Container in C++
A set is an associative  that contains a sorted set of unique objects of type Key. 
It is usually implemented using a Red-Black Tree, which is a type of self-balancing binary search tree. 
The value of an element in a set is also its key, which uniquely identifies it.

Real-World Example
A real-world example of a set is a collection of unique book titles in a library. Each book title is unique and stored in a sorted order, allowing for efficient lookup, insertion, and deletion of book titles.

Applications of Set
1) Unique Collection: Sets are used to store a collection of unique elements, 
    such as unique user IDs or unique words in a document.
2) Efficient Lookup: Sets provide efficient lookup operations, making them suitable for applications 
    where quick search and retrieval of elements are required.
3) Mathematical Operations: Sets are used to perform mathematical operations like union, intersection, 
    and difference on collections of elements.
4) Duplicate Elimination: Sets are used to eliminate duplicates from a collection of elements, ensuring that only 
    unique elements are stored.
5) Dictionary: Sets can be used to implement a dictionary or a word list, 
    where each word is unique and stored in a sorted order.



Example in C++
Here is a simple example of using a set in C++:
#include <iostream>
#include <set>

int main() {
    std::set<int> uniqueNumbers;

    // Adding elements to the set
    uniqueNumbers.insert(10);
    uniqueNumbers.insert(20);
    uniqueNumbers.insert(10); // Duplicate element, will not be added
    uniqueNumbers.insert(30);

    // Displaying elements of the set
    std::cout << "Set elements: ";
    for (const int& num : uniqueNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Checking if an element exists in the set
    if (uniqueNumbers.find(20) != uniqueNumbers.end()) {
        std::cout << "20 is in the set" << std::endl;
    } else {
        std::cout << "20 is not in the set" << std::endl;
    }

    return 0;
}

Output:
Set elements: 10 20 30
20 is in the set

In this example, elements are added to the set using the insert method. 
The set automatically ensures that only unique elements are stored. 
The find method is used to check if an element exists in the set. 
The elements in the set are displayed in sorted order.
*/


#include<bits/stdc++.h>
using namespace std;
void explainSet(){
//stores only unique elements
//stores in ascending order

set<int> st;
st.insert(2);
st.insert(21);
st.insert(21);
st.insert(21);
st.insert(12);

for(auto i: st){
    cout << i << " "; // 2 12 21}
}

// Whenever you want to check a set has an element or not, you can use the find method.

/* if(st.find(21) != st.end()){
    cout << "21 is present" << endl;
}  // output: 21 is present
*/

auto it = st.find(21);   // if it's not present it will return st.end().
if(it != st.end()){
    // cout << "21 is present" << endl;
    cout<< *it; // 21
}

// You can also use something known as count method to check the presence of an element.
cout << st.count(21); // Output: 1  ----- because it is present if it is not present then it will return 0.

// Erase an element from the set
st.erase(21); 
for(auto it: st){
    cout << it << " "; // 2 12
}

//What if I want to delete a certain location.
// assuming input is 2 12 21
auto it = st.end();
it--;
st.erase(it); // 21 is deleted
for(auto it: st){
    cout << it << " "; // Output: 2 12
}

//What if I have given it two times.
// assuming input is 2 12 21
auto it = st.end();
it--; it--;
st.erase(it); // 12 is deleted
for(auto it: st){
    cout << it << " "; // Output: 2 21
}

/*
Assuming the input is:
st.insert(2);
st.insert(21);
st.insert(12);
st.insert(211);
st.insert(213);
Now, I want to delete the range from 21 to 211. The 3 elements should be deleted.
Let's see how we can do that.
*/
for (auto it: st){
    cout << it << " "; // 2 12 21 211 213
}
cout << endl;
auto it1 = st.begin();
it1++; 

auto it2 = st.end();
it2--;

st.erase(it1, it2); // 12 21 211 will be deleted
for (auto it: st){
    cout << it << " "; // 2 213
}

// From 12 till 213 delete it, but the end one 213 is not counted.
/*
Output:
2 12 21 211 213
2 213
*/

//Lower bound and Upper bound
// Lower bound returns an iterator to the first element that is not less than the given key.
// Upper bound returns an iterator to the first element that is greater than the given key.
// If the element is not present, it will return the iterator to the next greater element.
// If the element is present, it will return the iterator to the next greater element.

/*
Assuming the input is:
st.insert(2);
st.insert(21);
st.insert(12);
st.insert(211);
st.insert(213);
*/


//  LOWER BOUND
//returns an iterator that points to an element that is  >= number given.

auto it = st.lower_bound(11); // if it's 12 then it will print 12. For 213 it will print 213. 
cout<< *it; // Output : 12

/*
auto it = st.lower_bound(214);
if(it == st.end()){
    cout << "end";  // Output: end
}
*/

//  UPPER BOUND
//returns an iterator that points to an element that is  > number given.

auto it = st.upper_bound(11);
cout<< *it; // Output : 12, for 12 it is 21, as we are looking for the next greater element.
//For 213 it is end iterator, not 213.
}

int main(){
    explainSet();
    return 0;
}