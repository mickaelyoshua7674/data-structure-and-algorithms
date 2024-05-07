#include <iostream>

struct Array {
    int A[10];
    int size, length;
};

/*
Show size (maximum capacity), length (number of defined elements) and elements inside an array.
*/
void display(Array arr) {
    printf("\nSize: %d\nLength: %d\nElements: ", arr.size, arr.length);
    for(int i=0;i<arr.length;i++) {
        printf("%d ", arr.A[i]);
    }
}

Array merge(Array *a, Array *b) {
    Array c;
    int i=0,j=0,k=0;

    while(i<a->length && j<b->length) {
        if(a->A[i] < b->A[j]) {
            c.A[k++]=a->A[i++];
        } else {
            c.A[k++]=b->A[j++];
        }
    }

    for(; i<a->length; i++) {
        c.A[k++]=a->A[i];
    }
    for(; j<b->length; j++) {
        c.A[k++]=b->A[j];
    }

    c.length=a->length+b->length;
    c.size=c.length+1;
    return c;
}

int main() {
    Array arr1={{2,4,6,8},10,4};
    display(arr1);
    Array arr2={{1,3,5,7},10,4};
    display(arr2);

    display(merge(&arr1, &arr2));
}