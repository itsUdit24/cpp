// ✅ Optimized & Clean Version

#include <bits/stdc++.h>
using namespace std;

void printCoursesForStudent(const multimap<string, int>& studentCourses, const string& studentName) {
    auto [start, end] = studentCourses.equal_range(studentName);  // Structured binding (C++17)

    cout << "Courses for " << studentName << ": ";
    for (auto it = start; it != end; ++it) {
        cout << it->second << " ";
    }
    cout << endl;
}

int main() {
    multimap<string, int> studentCourses = {
        {"Alice", 101},
        {"Alice", 102},
        {"Bob", 103},
        {"Charlie", 104},
        {"Charlie", 105}
    };

    cout << "All student-course pairs:\n";
    for (const auto& [name, course] : studentCourses) {  // Structured binding
        cout << name << ": " << course << endl;
    }

    cout << endl;
    printCoursesForStudent(studentCourses, "Alice");
    printCoursesForStudent(studentCourses, "Charlie");

    return 0;
}
/*
Output:
All student-course pairs:
Alice: 101
Alice: 102
Bob: 103
Charlie: 104
Charlie: 105

Courses for Alice: 101 102
Courses for Charlie: 104 105

*/

/*
            What                    |               Why
✅ Structured Binding (auto [a, b]) | Cleaner than pair.first, pair.second
✅ Modular Function                 | printCoursesForStudent keeps main function clean
✅ Initializer List for multimap    | Shorter syntax for inserting values
✅ Reusable                         | You can now reuse the function for any student name


*/

/*
As my gcc version is 6.3.0, I am not able to use the structured binding feature of C++17.
So, I will use the traditional way to get the range of elements for a specific key.

Workaround for Older GCC Versions
If you cannot update GCC, you can rewrite the code to avoid structured bindings. Replace the structured bindings with traditional std::pair access:

Modified Code Without Structured Bindings
#include <bits/stdc++.h>
using namespace std;

void printCoursesForStudent(const multimap<string, int>& studentCourses, const string& studentName) {
    auto range = studentCourses.equal_range(studentName);  // Use std::pair instead of structured binding

    cout << "Courses for " << studentName << ": ";
    for (auto it = range.first; it != range.second; ++it) {  // Access first and second manually
        cout << it->second << " ";
    }
    cout << endl;
}

int main() {
    multimap<string, int> studentCourses = {
        {"Alice", 101},
        {"Alice", 102},
        {"Bob", 103},
        {"Charlie", 104},
        {"Charlie", 105}
    };

    cout << "All student-course pairs:\n";
    for (auto it = studentCourses.begin(); it != studentCourses.end(); ++it) {  // Traditional iteration
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;
    printCoursesForStudent(studentCourses, "Alice");
    printCoursesForStudent(studentCourses, "Charlie");

    return 0;
}

Compile and run the code using the following commands:
g++ -std=c++11 -o multimap2 multimap2.cpp
.\multimap2

*/