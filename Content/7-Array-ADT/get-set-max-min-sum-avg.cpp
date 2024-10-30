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
Return the value on given index if is a valid index.
*/
int get(Array arr, int index) {
    if(index>=0 && index<arr.length) {
        return arr.A[index];
    }
    return -1;
}

/*
Define given value on given index if index is valid.
*/
void set(Array *arr, int index, int x) {
    if(index>=0 && index<arr->length) {
        arr->A[index]=x;
    }
}

/*
Check all elements and return the maximum value.
*/
int max(Array arr) {
    int value;
    int m=arr.A[0];
    for(int i=1;i<arr.length;i++) {
        value=arr.A[i];
        if(value>m) {
            m=value;
        }
    }
    return m;
}

/*
Check all elements and return the minimum value.
*/
int min(Array arr) {
    int value;
    int m=arr.A[0];
    for(int i=1;i<arr.length;i++) {
        value=arr.A[i];
        if(value<m) {
            m=value;
        }
    }
    return m;
}

/*
Go through all elements and return the total sum.
*/
int sum(Array arr) {
    int s=0;
    for(int i=0;i<arr.length;i++) {
        s+=arr.A[i];
    }
    return s;
}

/*
Return the average value.
*/
float avg(Array arr) {
    return (float)sum(arr)/arr.length;
}

int main() {
    Array arr={{2,3,4,5,6},10,5};
    display(arr);
    int index=2;
    int value=8;
    printf("\n\nGet on index %d: %d", index, get(arr,index));
    set(&arr,index,value);
    printf("\n\nSet on index %d value %d", index, value);
    display(arr);
    printf("\n\nMaximum: %d", max(arr));
    printf("\nMinimum: %d", min(arr));
    printf("\nSum: %d", sum(arr));
    printf("\nAverage: %f", avg(arr));
}