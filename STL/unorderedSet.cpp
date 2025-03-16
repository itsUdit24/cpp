/*
Unordered Set in C++
    An unordered set is an associative container that contains a set of unique objects of type Key. 
    Unlike a regular set, which stores elements in a specific order (usually sorted), 
    an unordered set stores elements in no particular order. It is implemented using a hash table, 
    which allows for average constant-time complexity for insertion, deletion, and lookup operations.

Real-World Example
    A real-world example of an unordered set is a collection of unique usernames in an online system. 
    The order in which usernames are stored does not matter, 
    but each username must be unique and can be quickly checked for existence.

Applications of Unordered Set
    1) Unique Collection: Unordered sets are used to store a collection of unique elements 
        where the order does not matter, 
        such as unique user IDs or unique words in a document.
    2) Efficient Lookup: Unordered sets provide efficient lookup operations, 
        making them suitable for applications where quick search and retrieval of elements are required.
    3) Duplicate Elimination: Unordered sets are used to eliminate duplicates from a collection of elements, 
        ensuring that only unique elements are stored.
    4) Hash-Based Operations: Unordered sets are useful in scenarios where hash-based operations are needed, 
        such as implementing hash tables or performing hash-based searches.

Example in C++
Here is a simple example of using an unordered set in C++:

#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> uniqueUsernames;

    // Adding elements to the unordered set
    uniqueUsernames.insert("user1");
    uniqueUsernames.insert("user2");
    uniqueUsernames.insert("user1"); // Duplicate element, will not be added
    uniqueUsernames.insert("user3");

    // Displaying elements of the unordered set
    std::cout << "Unordered set elements: ";
    for (const auto& username : uniqueUsernames) {
        std::cout << username << " ";
    }
    std::cout << std::endl;

    // Checking if an element exists in the unordered set
    if (uniqueUsernames.find("user2") != uniqueUsernames.end()) {
        std::cout << "user2 is in the set" << std::endl;
    } else {
        std::cout << "user2 is not in the set" << std::endl;
    }

    return 0;
}

Output:
Unordered set elements: user1 user3 user2
user2 is in the set

In this example, elements are added to the unordered set using the "insert" method. 
The unordered set automatically ensures that only unique elements are stored. 
The "find" method is used to check if an element exists in the unordered set. 
The elements in the unordered set are displayed in no particular order.



#include<bits/stdc++.h>
using namespace std;
void explainUnorderedSet(){
    //stores only unique elements
    //stores in no particular order
    unordered_set<int> us;
    us.insert(1);
    us.insert(1);
    us.insert(1);
    us.insert(1);
    us.insert(2);
    us.insert(0);
    us.insert(21);
    us.insert(21);

    for (auto it: us){
        cout << it << " "; // 0 1 2 21
    }
    cout << endl;

    // Find an element
    auto it = us.find(21);
    if(it != us.end()){
        cout << "21 is present" << endl;
    }

    // Erase an element
    us.erase(21);
    for (auto it: us){
        cout << it << " "; // 0 1 2
    }
    cout << endl;

    // Erase a certain location
    auto it1 = us.end();
    it1--;
    us.erase(it1);
    for (auto it: us){
        cout << it << " "; // 0 1
    }
    cout << endl;

    // Erase a range
    auto it2 = us.end();
    it2--; it2--;
    us.erase(it2, us.end());
    for (auto it: us){
        cout << it << " "; // 0
    }
    cout << endl;
}

*/

#include<bits/stdc++.h>
using namespace std;

void explainUnorderedSet(){

    //as the name suggest it has no particular order, it is random
    //it stores only unique elements
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(1);
    us.insert(11);
    us.insert(11);
    us.insert(12);
    us.insert(12);
    us.insert(12);

    for (auto it: us){
        cout << it << " "; // 1 2 11 12  (Striver k screen mein it was- 12 2 11 1)
        // It won't follow any order but it will store unique elements only
        // All the functionalities of the set do apply over here apart from lower bound and upper bound
        // because it is not sorted. And we can not apply lower bound and upper bound because the inner 
        // implementaition is typically around (hash table) the binary search tree, so because it is not sorted 
        // it can't be implemented.
    }

/*
Striver(Answered)
So you might have a question hey striver then why do we need unordered set?
The reason is it has a time complexity of O(1) for insertion, deletion and searching.
So if you don't need to maintain the order of the elements then you should use unordered set.
But if you need to maintain the order of the elements then you should use set.

*/

auto it = us.find(11); //0(1),  O(N) (rare scenario)
// Whenever I write this line, it will return me an iterator to the element 11
// But this happens almost in constant time complexity O(1)
// Only in some cases when you have huge huge data sets and numbers are colliding inside it (again you don't have to understand it)
// That's when this might end up taking O(n) time complexity but this is an extreme rare scenario doesn't happen, once in a blue moon.
// We will be understanding time complexity when we will do hasing in the future.

// If you do not consider the order and if you just want for search functionality, then you should use unordered set.
// If you want to maintain the order then you should use set.

// Again, this will have all of the things that set has set.size(), set.clear(), set.find() etc.

}



/*
Co-pilot (Answered)
Now you might have a question that why we use unordered_set when we have set?
    The answer is that unordered_set is faster than set because it uses hashing internally.
    So, if you don't need to maintain the order of the elements then you should use unordered_set.
    But if you need to maintain the order of the elements then you should use set.

    cout << endl;

    // Find an element
    auto it = us.find(11);
    if(it != us.end()){
        cout << "11 is present" << endl;
    }

    // Erase an element
    us.erase(11);
    for (auto it: us){
        cout << it << " "; // 1 2 12
    }
    cout << endl;

    // Erase a certain location
    auto it1 = us.end();
    it1--;
    us.erase(it1);
    for (auto it: us){
        cout << it << " "; // 1 2
    }
    cout << endl;

    // Erase a range
    auto it2 = us.end();
    it2--; it2--;
    us.erase(it2, us.end());
    for (auto it: us){
        cout << it << " "; // 1
    }
    cout << endl;

    // Size of the unordered set
    cout << us.size() << endl; // 1

    // Check if the unordered set is empty
    cout << us.empty() << endl; // 0

    // Clear the unordered set
    us.clear();
    cout << us.size() << endl; // 0

    // Insert elements in the unordered set
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(40);
    us.insert(50);

    // Count the number of elements with a specific key
    cout << us.count(30) << endl; // 1
    cout << us.count(100) << endl; // 0

    // Iterate over the unordered set
    for (auto it = us.begin(); it != us.end(); it++) {
        cout << *it << " "; // 10 20 30 40 50
    }
    cout << endl;

    // Iterate over the unordered set using range-based for loop
    for (auto it: us) {
        cout << it << " "; // 10 20 30


*/

int main(){
    explainUnorderedSet();
    return 0;
}

// 16/03/25