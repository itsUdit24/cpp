/*
Multiset in C++
A multiset is an associative container that is similar to a set, but it allows duplicate elements. 
Unlike a set, where all elements are unique, a multiset can store multiple occurrences of the same element. 
It is usually implemented using a Red-Black Tree, which ensures that the elements are stored in sorted order.

Real-World Example
A real-world example of a multiset is a bag of marbles where multiple marbles of the same color can exist. 
For instance, if you have 3 red marbles, 2 blue marbles, and 1 green marble, a multiset can represent 
this collection while maintaining the count of each marble.

Applications of Multiset

1) Counting Elements: Multisets are used to store and count occurrences of elements, 
    such as word frequencies in a document.
2) Inventory Management: Multisets can be used to manage inventories where duplicate items are allowed, 
    such as in a store or warehouse.
3) Mathematical Operations: Multisets are useful for performing operations like union, intersection, 
    and difference while considering duplicate elements.
4) Event Tracking: Multisets can be used to track events where the same event can occur multiple times, 
    such as logging repeated user actions.

Example in C++
Here is a simple example of using a multiset in C++:
#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers;

    // Adding elements to the multiset
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10); // Duplicate element, allowed in multiset
    numbers.insert(30);

    // Displaying elements of the multiset
    std::cout << "Multiset elements: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Counting occurrences of an element
    std::cout << "Count of 10: " << numbers.count(10) << std::endl;

    return 0;
}

Output:
Multiset elements: 10 10 20 30
Count of 10: 2

In this example, elements are added to the multiset using the "insert" method. 
The multiset allows duplicate elements and stores them in sorted order. 
The "count" method is used to find the number of occurrences of a specific element.

*/
#include<bits/stdc++.h>
using namespace std;

void explainmultiSet(){
//It is very much similar to the set data structure but the only difference is that it 
//stores repeating elements as well.

multiset<int> ms;
ms.insert(1);
ms.insert(1);
ms.insert(1);
ms.insert(1);
ms.insert(2);
ms.insert(0);
ms.insert(21);
ms.insert(21);

for (auto it: ms){
    cout << it << " "; // 0 1 1 1 1 2 21 21

}

auto it = ms.find(1); // It will point to the first occurrence of 1, so first 1 not to the last 1.
/*

auto it = ms.erase(1); // It will delete all the occurrences of 1.
for (auto it: ms){
    cout << it << " "; // 0 2 21 21
}

 What if I want to delete 1 of the ones.
 auto it = ms.find(1);
 st.erase(it);

            OR
auto it = ms.erase(ms.find(1)); // It will delete the first occurrence of 1.
for (auto it: ms){
    cout << it << " "; // 0 1 1 1 2 21 21
}

*/
cout<< ms.count(1) << endl; // 4, Cuz it will count all the occurrences of 1.

}

int main(){
    explainmultiSet();
    return 0;
}