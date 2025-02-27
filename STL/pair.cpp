// We are now going to see how to use pair in C++ STL.
// A pair is a simple container defined in the utility header file. It is a class template 
//that provides a way to store two heterogeneous objects as a single unit. 
//The first value is referenced as first and the second value is referenced as second.
// Let's see an example of how to use pair in C++ STL.

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,char> p;
    p.first = 3;
    p.second = 'a';
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
} */

// Output: 3 a
// So basically PAIR helps in storing two values in same variable / container.
// Now let's do it through function method.

#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    //If namespace is not used, then you have to use std::pair<int, int> p1;
    pair<int, int> pr1 = {2, 8}; // instead of the curly braces you can also use, make_pair(2, 8)
    cout<< pr1.first << " " << pr1.second << endl;

    //You can also have different data types in a pair.
    pair<int, char> pr2 = {2, 'b'};
    cout<< pr2.first << " " << pr2.second << endl;
    
    // Apart from the data types, we can also store pairs in a pair.
    pair<pair<int, char>, int> p3 ={{4, 'h'}, 8};
    cout<< p3.first.first << " " << p3.first.second << " " << p3.second << endl;
    // so there can be pairs inside pairs as well. As many nested pairs as you want.
}
int main(){
    explainPair();
    return 0;
}
    /* Output: 2 8
       2 b
       4 h 8 */
// So this is how you can use pair in C++ STL.