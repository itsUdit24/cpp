/*
    Priority Queue is a container adapter that provides constant time lookup of the largest (by default) element, 
    at the expense of logarithmic insertion and extraction. 
    It is implemented as a binary heap by default.

    Syntax:
    priority_queue <int> pq; // Max heap
    priority_queue <int, vector<int>, greater<int>> pq; // Min heap

    Functions:
    1. push() - O(logn)
    2. pop() - O(logn)
    3. top() - O(1)
    4. size() - O(1)
    5. empty() - O(1)

    Real-World Example
A real-world example of a priority queue is a hospital emergency room. Patients are treated based on the severity of their condition rather than their arrival time. The most critical patients are treated first, regardless of when they arrived.

Applications of Priority Queue
1) Task Scheduling: Priority queues are used in operating systems for task scheduling, 
    where tasks with higher priority are executed before tasks with lower priority.
2) Graph Algorithms: Priority queues are used in graph algorithms like Dijkstra's shortest path algorithm 
    and Prim's minimum spanning tree algorithm.
3) Event Simulation: Priority queues are used in event-driven simulation systems to manage events in the order 
    of their scheduled times.
4) Data Compression: Priority queues are used in data compression algorithms like Huffman coding to build the optimal 
    prefix code.

*/

#include<bits/stdc++.h>
using namespace std;    
//stores the highest priority element at the top
//underneath this data structure there is a heap implemented.
//by default it is a max heap
void explainPQ(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);

    while(pq.empty() == false){
        cout << pq.top() << " ";
        pq.pop();
        cout<< endl; 
        /*
        Output:
        10 
        8 
        5 
        2
        */
    }

    cout << pq.top() << endl; // 10
    pq.pop();
    cout << pq.top() << endl; // 8


    //Stores the smallest element at the top, it becomes a min heap.
    priority_queue<int, vector<int>, greater<int>> pq;
    /*
    If we change the above line to this then the output will be:
    2
    5   
    8
    10

    Why does it work?
    The greater<int> is a comparator function that is used to compare two elements in the priority queue.
    By default, the priority queue is a max heap, which means the element with the highest value is at the top.
    If we want to create a min heap, we need to change the comparator function to greater<int>,
    which will store the smallest element at the top.
    */

}
int main(){
    explainPQ();
    return 0;
}