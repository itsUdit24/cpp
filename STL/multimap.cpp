/*
Multimap in C++
    A multimap is an associative container in C++ that stores elements in key-value pairs, 
    similar to a map. However, unlike a map, a multimap allows multiple elements to have the same key. 
    It is typically implemented using a self-balancing binary search tree, such as a Red-Black Tree, 
    which ensures that the elements are stored in sorted order based on their keys.

Real-World Example
    A real-world example of a multimap is a student-course registration system. 
    A student (key) can register for multiple courses (values). 
    The multimap allows storing multiple courses for the same student while maintaining the sorted order of student IDs.
    
    SINGLE KEY -> MULTIPLE VALUES
    
    
Applications of Multimap
1) Duplicate Key Storage: Multimaps are used when multiple values need to be associated with the same key, 
    such as storing multiple phone numbers for a single contact.

2) Indexing with Duplicates: Multimaps are used in databases or search engines where duplicate keys are allowed.

3) Grouping Data: Multimaps are used to group data by a common key, such as grouping employees by department.

4) Event Tracking: Multimaps can track events where the same event (key) can have multiple associated details (values).

Example in C++
Here is a simple example of using a multimap in C++:

#include<bits/stdc++.h>
using namespace std;

int main() {
    multimap<string, int> studentCourses;

    // Adding elements to the multimap
    studentCourses.insert({"Alice", 101});
    studentCourses.insert({"Alice", 102});
    studentCourses.insert({"Bob", 103});
    studentCourses.insert({"Charlie", 104});
    studentCourses.insert({"Charlie", 105});

    // Displaying elements of the multimap
    cout << "Student Courses:" << endl;
    for (const auto& pair : studentCourses) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Finding all courses for a specific student
    cout << "\nCourses for Alice:" << endl;
    auto range = studentCourses.equal_range("Alice");
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    return 0;
}

Output:
Student Courses:
Alice: 101
Alice: 102
Bob: 103
Charlie: 104
Charlie: 105

Courses for Alice:
101 102

In this example, elements are added to the multimap using the "insert" method. The "equal_range" method is used to find all values associated with a specific key. The multimap automatically ensures that keys are sorted and allows duplicate keys.
*/
#include<bits/stdc++.h>
using namespace std;

void explaimMultimap(){
    //Same key, different values.
    multimap<int, char> mp;
    mp.insert({3, 'b'});
    mp.insert({1, 'a'});
    mp.insert({1, 'b'});
    mp.insert({1, 'a'});
    mp.insert({2, 'a'});
    mp.insert({2, 'a'});
    mp.insert({2, 'b'});

    for (auto it: mp){
        cout << it.first << "->" << it.second << endl;
    }
    /*
    Output: 
    1->a
    1->a
    1->b
    2->a
    2->a
    2->b
    3->b

    It didn't sorted the value but it sorted according to the keys. 
    */

    auto it = mp.equal_range(2);
    for (auto itr = it.first; itr != it.second; itr++){  // <= nahi not eaquals hogha because 
        // In map, the elements are not stored in a consecutive (memory location, so we can't use <=) order.
        //cout << itr->first << "->" << itr->second << endl;
        cout << (*itr).first << "->" << (*itr).second << endl;
    }
    /* 
    Output:
    2->a
    2->a
    2->b
    */




}

int main(){
    explaimMultimap();
    return 0;
}
