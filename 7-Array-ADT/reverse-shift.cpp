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
Swap two integer variables
*/
void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}

void reverseAuxiliarArray(Array *a) {
    Array b=*a;
    for(int i=a->length-1,j=0; i>=0; i--,j++) {
        b.A[j]=a->A[i];
    }
    for(int i=0;i<b.length;i++) {
        a->A[i]=b.A[i];
    }
}

void reverseSwap(Array *a) {
    for(int i=0,j=a->length-1; i<j; i++,j--) {
        swap(&a->A[i], &a->A[j]);
    }
}

int main() {
    Array arr={{2,3,4,5,6},10,5};
    display(arr);

    reverseAuxiliarArray(&arr);
    display(arr);

    reverseSwap(&arr);
    display(arr);
}