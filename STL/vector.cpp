/* Vector in C++ STL is basically a dynamic array. It is similar to arrays but with dynamic size.
   We can increase or decrease the size of the vector as per our requirement. 
   It is defined in the vector header file.
   Let's see an example of how to use vector in C++ STL.
   Array is static type of container in nature, while vector is dynamic */

 /* #include<bits/stdc++.h>
 using namespace std;
    void explainVector(){
        vector<int> v; // This is how you define a vector.
        v.push_back(1); // This is how you insert an element in a vector.
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        // This is how you print the elements of a vector.
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        // This is how you delete the last element of a vector.
        v.pop_back();
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        // This is how you insert an element at the beginning of a vector.
        v.insert(v.begin(), 0);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        // This is how you delete the first element of a vector.
        v.erase(v.begin());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        // This is how you clear the vector.
        v.clear();
        cout<<v.size()<<endl;
    }
    int main(){
        explainVector();
        return 0;
    }
    // Output: 1 2 3 4 5
    //         1 2 3 4      
    //         0 1 2 3 4
    //         1 2 3 4
    //         0
    // So this is how you can use vector in C++ STL. */

// Let's see with some more examples. 

#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.emplace_back(0); // You can also use emplace_back() to insert an element at the end of the vector.

    // Genrally emplace_back() is used when you are inserting an object of a class in the vector.
    // But in this case, it is same as push_back(). And it is faster than push_back() because it doesn't create a copy of the object.
    // So if you are inserting an object of a class in the vector, use emplace_back() instead of push_back().

    cout<< vec.size() << endl; // This is how you get the size of the vector. output: 3
    cout<< vec.capacity() << endl; // This is how you get the capacity of the vector.  output: 4, because the default capacity is 1, and it doubles when it is full. Here, 1+2+1 = 4.
    // The difference between size and capacity is that size is the number of elements in the vector,
    // while capacity is the number of elements that the vector can store.
    // [1, 2, 0] - to store these 3 elements, the capacity is 4. Now let's see how to print the elements of a vector.
    for(int i=0;i<vec.size();i++){     // vec size is less than 3, so i will traverse from 0 to 2, which is 3 elements.
        cout<<vec[i]<<" ";
    }                                 // output: 1 2 0
    cout<<endl;
  //Now what if you don't want to write these many lines of code to print the elements of a vector.
  // This is where the auto keyword comes into play. But we will first see Iterator.
    // An iterator is an object that points to an element in a container.
    // We can use iterators to move through the elements of a container.
    // Let's see how to use iterators in C++ STL.

    vector<int>:: iterator beginItr = vec.begin(); // This is how you define an iterator. 

    /* for(itr = vec.begin(); itr != vec.end(); itr++){ // This is how you traverse through the elements of a vector using an iterator.
        cout<<*itr<<" "; // This is how you print the elements of a vector using an iterator. */
       
        //cout<<*beginItr<<" "; // output: 1

        // Now what if we need the last element of the vector. We can do it by using the end() function.
    vector<int>:: iterator endItr = vec.end(); // This is how you define an iterator. But remember that the end() function points to the next location after the last element, 
        // and it doesn't point to the last element itself. So we have to decrement it by 1 to get the last element.

    for(vector<int>::iterator i = beginItr; i<endItr; i++){
        cout<<*i<<" ";  //output: 1 2 0
    }
    cout<<endl;
    // output: 1 2 0
    /*Now the above line must seem like little too long so now here comes the 
    C++ keyword auto, So what auto does is it automatically detects the data type of the variable.
    So instead of writing vector<int>::iterator, we can write auto. Now let's do the same thing but with auto now*/
    auto beginItr1 = vec.begin();
    auto endItr1 = vec.end();
    for(auto i = beginItr1; i<endItr1; i++){
        cout<<*i<<" ";   //output: 1 2 0
    }
    cout<<endl;
    // Now can I do better? Yes we can. We can use the range based for loop. It is For each loop in C++.
    // It is used to traverse through the elements of a container.
    // It's syntax is for(data_type variable: container){ //code }
    // Let's see how to use the range based for loop in C++ STL.
    for(auto i: vec){
        cout<<i<<" ";  //output: 1 2 0
    }
    cout<<endl;
    
    // Reverese Iterator
    // A reverse iterator is an iterator that moves backward through a container.
    // We can use reverse iterators to move backward through the elements of a container.
    // Let's see how to use reverse iterators in C++ STL.
    //vector<int>::reverse_iterator rbeginItr = vec.rbegin(); // This is how you define a reverse iterator, but we will use auto as we knoow about it now.
    auto reverseBegin = vec.rbegin(); // It will be pointing to 0, (the last element of the vector).
    auto reverseEnd = vec.rend();    // It will be pointing to somehwere before 1, (the first element of the vector).
    for(auto i = reverseBegin; i<reverseEnd; i++){
        cout<<*i<<" ";  //output: 0 2 1
    }

    vector<int> vec1(5); // This is how you define a vector of size 5.
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);

for(auto i: vec1){
    cout<<i<<" ";  //output: 0 0 0 0 0 1 2 3
}
cout<<endl;
// You can also do 5, 8's in the vector.
vector<int> vec2(5, 8); // This is how you define a vector of size 5 with all elements as 8.
vec2.push_back(1);
vec2.push_back(2);
vec2.push_back(3);
for(auto i: vec2){
    cout<<i<<" ";  
}
cout<<endl; //output: 8 8 8 8 8 1 2 3 (which mean 5 8's and then 1 2 3)

//Now another way of defining vector would be.
vector<int> vec3 = {7,8}; // Which means you already define the 2 elements in the vector, and the rest you just push it in
vec3.push_back(1);
vec3.push_back(2);
vec3.push_back(3);
for(auto i: vec3){
    cout<<i<<" ";  //output: 7 8 1 2 3
}
cout<<endl;

// I can also create a duplicate vector of vec3.
vector<int> vec4(vec3); // This is how you define a vector vec4 which is a duplicate of vec3.
for(auto i: vec4){   // That is basically variable name you can give anything like Striver gave dupVec.
    cout<<i<<" ";  //output: 7 8 1 2 3   
}
cout<<endl;

// Incase I don't want the first element of vec4.
// vec4.erase(vec4.begin());  /This is how you delete the first element of a vector. Output: 8 1 2 3

// Or I don't wanna duplicate the whole vector, I just want to copy the first 3 elements of vec3.
vector<int> dupVec(vec3.begin()+1, vec3.end()/*-1, if you wanna skip out the last one out*/); // This is how you define a vector dupVec which is a copy of the first 3 elements of vec3.
for(auto i: dupVec){
    cout<<i<<" ";  //output: 8 1 2 3 , without the first element of vec3.
}
cout<<endl;

/*
vec.front() - This is how you get the first element of a vector.
vec.back() - This is how you get the last element of a vector.
vec.at(index) - This is how you get the element at a particular index of a vector.
vec.clear() - This is how you clear the vector.
vec.empty() - This is how you check if a vector is empty or not. It returns a boolean value.
vec.resize() - This is how you resize the vector.
vec.swap() - This is how you swap the elements of two vectors.
vec.assign() - This is how you assign new elements to a vector.
vec.insert() - This is how you insert new elements in a vector.
vec.erase() - This is how you delete elements from a vector.
vec.emplace() - This is how you insert a new element at a particular position in a vector.
vec.emplace_back() - This is how you insert a new element at the end of a vector.
vec.pop_back() - This is how you delete the last element of a vector.
vec.push_back() - This is how you insert a new element at the end of a vector.
vec.begin() - This is how you get the beginning of a vector.
vec.end() - This is how you get the end of a vector.
vec.rbegin() - This is how you get the reverse beginning of a vector.
vec.rend() - This is how you get the reverse end of a vector.
vec.size() - This is how you get the size of a vector.
vec.capacity() - This is how you get the capacity of a vector.
vec.reserve() - This is how you reserve a space for a vector.
vec.shrink_to_fit() - This is how you reduce the capacity of a vector to fit its size.
vec.max_size() - This is how you get the maximum number of elements that a vector can hold.
vec.data() - This is how you get the pointer to the first element of a vector.
vec.at() - This is how you get the element at a particular index of a vector. 
This is how access an element but no one uses this, they all use [] operator instead.

*/

// Let's see example for swap 
vector<int> vec5 = {1, 2, 3};
vector<int> vec6 = {4, 5, 6};
// vec5.swap(vec6); // This is how you swap the elements of two vectors or you can use the below method.
swap(vec5, vec6);
for(auto i: vec5){
    cout<<i<<" ";  //output: 4 5 6
}

//Lets see vec.insert() method example. 
//Let's insert 8 at the beginning of vec5. vec5 = {4, 5, 6} cuz we swapped it with vec6.
vec5.insert(vec5.begin(), 8); // This is how you insert an element at the beginning of a vector.
for(auto i: vec5){
    cout<<i<<" ";  //output: 8 4 5 6
}

}


int main(){
    explainVector();
    return 0;
}

// With this we are done with vector in C++ STL.When you are gonna go to the depth
// in doing you are gonna know what is the importance of vector, It is literraly the backbone of C++ STL.