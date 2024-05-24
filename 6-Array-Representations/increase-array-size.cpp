#include <iostream>

int main() {
    int size_p=5, size_q=10;
    int *p = new int[size_p] {3,5,7,9,1};
    int *q = new int[size_q]; // allocate a new array with the new size

    for(int i=0;i<size_p;i++) { // copy all elements from previous array to new array
        q[i]=p[i];
        printf("%d ", p[i]);
    }
    printf("\n");
    delete[] p; // delete the address on previous array
    p=q; // point to new array
    q=NULL; // dereference the new pointer so there is only one pointer to new array
    for(int i=0;i<size_p;i++) {
        printf("%d ", p[i]);
    }
}