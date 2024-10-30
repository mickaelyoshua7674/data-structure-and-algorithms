## Static Memory Allocation
Is the memory allocated on the Stack by the program (code), the number of bytes allocated for each variable. The size is decided on compile time and each size for each variable type depends on compiler, operational system, hardware etc.
Stack Memory is an oranized memory, works like a stack, stacking allocated memory for each function.

## Dynamic Memory Allocation
Is dinamic because uses the Heap Memory like a resource, alllocate when needed and freed when no longer needed. A program (code) can't access directly heap memory, can only be accessed by pointers, using the address for the allocated memory.
Heap Memory is an unorganized memory, does not have an order for allocation.

## Types of Data Structures
### Physical Data Structures
There are two base physical data structures: Array and Linked List.
Those are called physical bacause the define how the memory is organized and allocated, is used to actually store the data in memory.

### Logical Data Structures
The logical data structures are: Stack, Queues, Trees, Graphs and Hash Tables. Those logical data structures define how to navigate the data, how insert, delete etc.
* Linear Data structure: Stack and Queues;
* Non-linear Data Structure: Trees and Graphs;
* Tabular Data Structure: Hash Table.

## ADT (Abstract DataType)
DataType is defined by:
* Representation of Data, how store it;
* Operation on Data, what operations are alowed in that data.

Abstract DataType is more related to OOP, is hiding details and using then without knowing then. e.g.: Implement a class for Lists, store as array or linked list, define the operations like 'add', 'remove', 'search', then use the class in your program without needing to know how is stored and how is executed the operations (like using the object 'list' in Python).

## Time and Space Complexity
* Time complexity: time taken to execute certain tasks on data concerning the number of elements and how is there structure;
* Space Complexity: space in memory necessary to store the data concerning only the number of elements, not the number of bytes.