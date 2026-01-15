/*
Hashing in C++
Hashing is a technique used to uniquely identify a specific object from a group of similar objects.
It is used to map data of arbitrary size to fixed-size values.
In C++, hashing is implemented using hash functions, which take an input (or 'key') and return a fixed-size string of bytes.
The output, typically a 'hash code' or 'hash value', is usually a sequence of numbers and letters.
Common Hashing Techniques in C++
1) Hash Tables: A hash table is a data structure that implements an associative array abstract data type, 
    a structure that can map keys to values. It uses a hash function to compute an index into an array of buckets or slots, 
    from which the desired value can be found.
2) Unordered Containers: The C++ Standard Library provides unordered containers such as unordered_map and unordered_set, 
    which use hashing to store and retrieve elements efficiently.
3) Custom Hash Functions: C++ allows developers to define their own hash functions for user-defined types, 
    enabling the use of these types in hash-based containers.
Applications of Hashing
1) Data Retrieval: Hashing is widely used in databases and caching systems to quickly retrieve data.
2) Cryptography: Hash functions are used in cryptographic applications to ensure data integrity and security.
3) Load Balancing: Hashing is used in distributed systems to evenly distribute data across multiple servers.
 
*/