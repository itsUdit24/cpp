//List comes next
/*
List is also a container and it works on similar format as vector. 
The only difference is that in vector, 
the elements are stored in contiguous memory locations,
whereas in list, the elements are stored in non-contiguous memory locations. This is why list is slower than vector.
Let's see an example of how to use list in C++ STL.
*/
#include<bits/stdc++.h>
using namespace std;
void explainList(){
    list<int> ls;
    //we have a speciality in list, list allows you to enter/insert at front and back as well.
    // Like in case of a vector you dont have push_front() method.
    list <int> ls2 = {6, 7};
    ls2.push_front(5);  // output: 5 6 7
    ls2.push_back(8);  // output: 5 6 7 8
    for(auto i: ls2){
        cout<<i<<" ";
    } //output: 5 6 7 8
    cout<<endl;

    ls.push_back(1); // This is how you insert an element at the end of the list.
    ls.push_back(2);
    ls.push_front(0); // This is how you insert an element at the beginning of the list.
    for(auto i: ls){
        cout<<i<<" ";  //output: 0 1 2
    }
    cout<<endl;
    ls.pop_back(); // This is how you delete the last element of the list.
    ls.pop_front(); // This is how you delete the first element of the list.
    for(auto i: ls){
        cout<<i<<" ";  //output: 1
    }
    cout<<endl;
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.push_back(7);
    ls.push_back(8);
    ls.push_back(9);
    ls.push_back(10);
    ls.push_back(11);
    ls.push_back(12);
    ls.push_back(13);
    ls.push_back(14);
    ls.push_back(15);
    ls.push_back(16);
    ls.push_back(17);
    ls.push_back(18);
    ls.push_back(19);
    ls.push_back(20);
    ls.push_back(21);
    ls.push_back(22);
    ls.push_back(23);
    ls.push_back(24);
    ls.push_back(25);
    ls.push_back(26);
    ls.push_back(27);
    ls.push_back(28);
    ls.push_back(29);
    ls.push_back(30);
    ls.push_back(31);
    ls.push_back(32);
    ls.push_back(33);
    ls.push_back(34);
    ls.push_back(35);
    ls.push_back(36);
    ls.push_back(37);
    ls.push_back(38);
    ls.push_back(39);
    ls.push_back(40);
    ls.push_back(41);
    ls.push_back(42);
    ls.push_back(43);
    ls.push_back(44);
    ls.push_back(45);
    ls.push_back(46);
    ls.push_back(47);
    ls.push_back(48);
    ls.push_back(49);
    ls.push_back(50);
    ls.push_back(51);
}
int main(){
    explainList();
    return 0;
}