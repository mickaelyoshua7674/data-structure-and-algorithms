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

/*
Check if element is greater then value, if it is then shift to right,
when is not then insert element.
*/
void insertIntoSorted(int x, Array *a) {
    int i=a->length-1;
    while(a->A[i]>x) {
        a->A[i+1]=a->A[i];
        i--;
    }
    a->A[i+1]=x;
    a->length++;
}

int main() {
    Array arr={{2,4,6,8,10},10,5};
    display(arr);

    insertIntoSorted(5, &arr);
    display(arr);
}