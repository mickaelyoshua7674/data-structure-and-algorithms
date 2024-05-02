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
Standard Linear Search, return index of searche key,
if not found return -1.
*/
int linearSearch(Array arr, int key) {
    for(int i=0;i<arr.length;i++) {
        if(arr.A[i]==key) {
            return i;
        }
    }
    return -1;
}

/*
Swap two integer variables
*/
void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}
/*
Transposition Linear Search: when key is found, shift the found element
to the left, so its easy to seach next time, reduce 1 operation every time
the element is found.
*/
int linearSearchTransposition(Array *arr, int key) {
    for(int i=0;i<arr->length;i++) {
        if(arr->A[i]==key) {
            swap(&arr->A[i],&arr->A[i-1]);
            return i-1;
        }
    }
    return -1;
}
/*
Move to Front/Head Linear Search: when key is found, shift the found element
to the begining of the array (index 0), so its easy to seach next time, reduce to 1 operation
the search for the found element.
*/
int linearSearchMoveToFront(Array *arr, int key) {
    for(int i=0;i<arr->length;i++) {
        if(arr->A[i]==key) {
            swap(&arr->A[i], &arr->A[0]);
            return 0;
        }
    }
    return -1;
}

int main() {
    Array arr={{2,3,4,5,6},10,5};
    display(arr);
    int key1=5;

    printf("\n\nLinear Search index %d", linearSearch(arr,key1));
    printf("\n\nLinear Search Transposition index %d", linearSearchTransposition(&arr,key1));
    display(arr);
    printf("\n\nLinear Search Move to Front/Head index %d", linearSearchMoveToFront(&arr,key1));
    display(arr);
}