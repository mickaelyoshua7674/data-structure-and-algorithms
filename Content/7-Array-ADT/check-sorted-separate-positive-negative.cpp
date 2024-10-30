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

bool isSorted(Array a) {
    for(int i=0;i<a.length-1;i++) {
        if(a.A[i]>a.A[i+1]) {
            return false;
        }
    }
    return true;
}

void separatePositiveNegative(Array *a) {
    int i=0, j=a->length-1;
    while(i<j) {
        while(a->A[i]<0){i++;}
        while(a->A[j]>=0){j--;}
        if(i<j) {
            swap(&a->A[i], &a->A[j]);
        }
    }
}

int main() {
    Array arr={{2,6,4,8,10},10,5};
    display(arr);
    if(isSorted(arr)) {
        printf("\nArray is sorted.");
    } else {
        printf("\nArray is not sorted.");
    }

    Array arr2={{2,-1,-4,3,5,6,-6,7},10,8};
    display(arr2);
    separatePositiveNegative(&arr2);
    display(arr2);
}