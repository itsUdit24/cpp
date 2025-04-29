/* 
Queue in C++
(FIFO - First In First Out)
A queue is a container adapter that provides the functionality of a queue - specifically, 
a FIFO (first-in, first-out) data structure. 
This means that the first element added to the queue will be the first one to be removed. 
The standard container classes deque and list can be used to implement the queue container adapter.

Why not vector?
Because vector is not a good choice for implementing a queue, 
as it does not provide efficient insertion and deletion at both ends.

Real-World Example
A real-world example of a queue is a line of people waiting at a ticket counter. 
The first person in line is the first one to be served, and new people join the end of the line. 
This ensures that the first person to join the line is the first one to be served.

Applications of Queue
1) Task Scheduling: Queues are used in operating systems for task scheduling. 
    Tasks are added to the queue, and the scheduler processes them in the order they were added.

2) Breadth-First Search (BFS): Queues are used in graph traversal algorithms like BFS, 
    where nodes are explored level by level.

3) Print Spooling: In printing tasks, documents are added to a print queue and printed in the order they were added.

4) Data Buffers: Queues are used in buffering data streams, such as in network communication, 
    where data packets are processed in the order they arrive.

Example in C++
Here is a simple example of using a queue in C++:

#include <iostream>
#include <queue>

int main() {
    std::queue<int> line;

    // Adding people to the queue
    line.push(1); // Person 1
    line.push(2); // Person 2
    line.push(3); // Person 3

    // Serving people from the queue
    while (!line.empty()) {
        std::cout << "Serving person: " << line.front() << std::endl;
        line.pop();
    }

    return 0;
}

In this example, people are added to the queue using the push method and served using the pop method. The front method is used to access the first person in the queue.

*/
#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    // Empty Queue
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front of Queue: " << q.front() << endl;
    cout << "Back of Queue: " << q.back() << endl;

    q.pop();
    cout << "After Pop Front of Queue: " << q.front() << endl;

    cout << "Size of Queue: " << q.size() << endl;
    cout << "Is Queue Empty: " << q.empty() << endl;

    cout << "Queue Elements: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
/*
Output:
Front of Queue: 10
Back of Queue: 30
After Pop Front of Queue: 20
Size of Queue: 2
Is Queue Empty: 0
Queue Elements: 20 30
*/
queue<int>qu;
    qu.push(2);
    qu.push(22);
    qu.push(23);
    qu.push(24);
    while(qu.empty()==false){
        cout<<qu.front()<<" ";
        qu.pop();
    }

    /*
    Output:
    2 22 23 24 
    */

}

int main(){
    explainQueue();
    return 0;
}

