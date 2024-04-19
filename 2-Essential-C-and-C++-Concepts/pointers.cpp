#include <iostream>
using namespace std;

/*
One of the reasons for create pointers is access heap memory,
the program does not access heap memory directly because is resources outside
the program itself.
1. Accessing heap memory;
2. Accessing resources;
3. Parameter passing.
*/

int main() {
    int a=10; // data variable
    int *p; // address variable
    p = &a; // receive a address / initialization of pointer
    printf("Using variable directly: %d\nUsing address: %d", a, *p);
    printf("\nValue: %d\nAddress: %d\nint address: %d\n",*p, p, &a);

    // ALLOCATING MEMORY ON HEAP
    int *b, *c;
    // malloc allocate memory on heap and takes the size of bytes as argument
    // returns a void pointer, so have to type-cast it and declare the type
    // this case is 5 times the size of an integer, an array of int
    b = (int *)malloc(5*sizeof(int));
    // an int pointer to the start of an integer array on heap memory
    free(b); // allways dealocate memory

    // in C++
    c = new int[5];
    // pointer to the start of a new allocated heap memory for an integer array of size 5
    delete[] c;
}