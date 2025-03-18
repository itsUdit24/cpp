/*
Map in C++
    A map is an associative container in C++ that stores elements in key-value pairs. 
    Each key in a map is unique, and it is used to uniquely identify the corresponding value. 
    Maps are typically implemented using a self-balancing binary search tree, such as a Red-Black Tree, 
    which ensures that the elements are stored in sorted order based on their keys.

Real-World Example
    A real-world example of a map is a dictionary. In a dictionary, each word (key) is associated with its meaning (value). 
    The words are stored in sorted order, and you can quickly look up the meaning of a word using its key.

Applications of Map
1) Key-Value Storage: Maps are used to store and retrieve data based on unique keys, 
    such as storing student IDs (keys) and their grades (values).
    
2) Indexing: Maps are used for indexing and searching data efficiently, 
    such as in databases or search engines.

3) Frequency Count: Maps are used to count the frequency of elements, 
    such as counting the occurrences of words in a document.

4) Caching: Maps are used in caching mechanisms to store and retrieve data quickly using keys.

5) Symbol Tables: Maps are used in compilers to implement symbol tables, 
    where variable names (keys) are mapped to their memory locations or values.

Example in C++
Here is a simple example of using a map in C++:

#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string, int> studentGrades;

    // Adding elements to the map
    studentGrades["Alice"] = 90;
    studentGrades["Bob"] = 85;
    studentGrades["Charlie"] = 95;

    // Displaying elements of the map
    cout << "Student Grades:" << endl;
    for (const auto& pair : studentGrades) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Searching for a key in the map
    if (studentGrades.find("Bob") != studentGrades.end()) {
        cout << "Bob's grade: " << studentGrades["Bob"] << endl;
    } else {
        cout << "Bob is not in the map." << endl;
    }

    return 0;
}


Output:
Student Grades:
Alice: 90
Bob: 85
Charlie: 95
Bob's grade: 85
In this example, a map named studentGrades is created to store student names (keys) and their grades (values). 
Elements are added to the map using the key-value syntax. The elements are displayed in sorted order based on the keys. 
The find method is used to search for a key in the map, 
and the value corresponding to the key is retrieved using the key itself.

In this example, elements are added to the map using the "[]" operator. 
The map automatically ensures that the keys are unique and stored in sorted order. 
The "find" method is used to check if a key exists in the map.
*/

#include<bits/stdc++.h>
using namespace std;

void explainMap(){
    map<int, string> mpp;   // <key, value> (key is int and value is string)
    mpp[1] = "abc";         // 1 is key and "abc" is value
    //mpp[1] = "vik";       // It will overwrite the value of key 1, in ans it will print "vik" instead of "abc".
    /*
    Output:
     1->vik
     2->bcd
     3->cat
     4->Raj
    */
    mpp[2] = "bcd";
    mpp[3] = "cat";
    mpp.insert({4, "Raj"}); // Another way to insert key-value pair
    // What if I write line no. 75 above all will it print it first? No, it will print it in (ascending) sorted order of keys.
    // Smaller keys will at first and then we will be gradually increasing the keys.
    for (auto it: mpp){
        cout << it.first << "->" << it.second << endl;
    }
    /* 
    Output:
     1->abc
     2->bcd
     3->cat
     4->Raj
    */
    auto it = mpp.find(4);  // Find function will return an iterator to the key-value pair
    // cout<< it->second << endl; // Raj
    cout<< (*it).first<< "->"<< (*it).second << endl; // Output: 4->Raj

    /*
    auto it = mpp.find(5);
    if(it == mpp.end()){
        cout << "No value" << endl;    // Output: No value
    }
    */

    // UNORDERED MAP, is the same concept as unordered set, it will store the key-value pair in no particular order.
    // ETC, find in the image.   

}

int main(){
    explainMap();
    return 0;
}