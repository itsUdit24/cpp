/*
Stack is a container adapter that gives the programmer the functionality of a stack - specifically, 
a LIFO (last-in, first-out) data structure. The standard container classes deque, list, and vector
can be used to implement the stack container adapter. 

Stack in C++
A stack is a container adapter that provides the functionality of a stack - specifically, a LIFO (last-in, first-out) data structure. 
This means that the last element added to the stack will be the first one to be removed. 
The standard container classes deque, list, and vector can be used to implement the stack container adapter.

Real-World Example
A real-world example of a stack is a stack of plates. 
When you add a new plate, you place it on top of the stack. 
When you need a plate, you take the top one off the stack first. 
This ensures that the last plate added is the first one to be removed.

Applications of Stack
1) Function Call Management: Stacks are used to manage function calls in programming languages. 
    When a function is called, its details are pushed onto the stack, and when the function returns, 
    its details are popped from the stack.

2) Expression Evaluation: Stacks are used in evaluating arithmetic expressions and parsing expressions 
    (e.g., converting infix to postfix notation).

3) Undo Mechanism: Many applications, such as text editors, use stacks to implement undo functionality. 
    Each action is pushed onto a stack, and undoing an action involves popping the stack.

4) Syntax Parsing: Compilers use stacks to parse syntax and check for balanced parentheses, brackets, and braces.

*/
#include<bits/stdc++.h>
using namespace std; 

void explainStack(){
    stack<int> st;
    st.push(1); // This is how you insert an element in a stack.
    st.push(7);

    cout<<sizeof(st)<<endl; //output: 24 This is because sizeof(st) returns the size of the stack object itself, 
    //not the size of the elements it contains. The size of the stack object is implementation-dependent, 
    //but in this case, it is 24 bytes.
    cout<<st.size()<<endl; //output: 2

    /*
    How do I print the stack? Can I run a for loop or do I have an iterator concept here ? 
    No, you don't have an iterator concept here.
    The only way to get the elements of stack is by taking it out of the stack.
    */
    // st.top(); // This will return the top element of the stack.
    cout<<st.top()<<" "; //output: 7
    st.pop(); // This will remove the top element of the stack. It deletes 7 from the stack.
    cout<<st.top()<<" "; //output: 1
    st.pop(); // deletes 1 from the stack.
    cout<<st.top()<<" "; //output: Runtime Error. As there is no element in the stack.

    //Printing the stack
    st.push(1);
    st.push(7);
    st.push(71);
    st.push(73);
    st.push(17);
    st.push(27);

    while(st.empty() == false){        //while(!st.empty())-------empty() returns true if the stack is empty, otherwise false.
        cout<<st.top()<<" "; //output: 27 17 73 71 7 1
        st.pop();
    }

}
int main(){
    explainStack();
    return 0;

}   
//revision