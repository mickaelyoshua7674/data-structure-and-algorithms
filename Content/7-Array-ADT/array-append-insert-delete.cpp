#include <iostream>

struct Array {
    int *A;
    int size;
    int length;
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
If the length is less than size, the is space to insert an element at the end, so
insert at the end and increase in 1 the number of elements (length).
*/
void append(Array *arr, int x) {
    if(arr->length<arr->size) {
        arr->A[arr->length++]=x;
    }
}

/*
Shift the array to right then insert new element at given index.
*/
void insert(Array *arr, int index, int x) {
    if(index<=arr->length && index>=0) {
        for(int i=arr->length;i>index;i--) {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

/*
Delete the element at given index then shift array to left.
*/
int del(Array *arr, int index) {
    int x;
    if(index<arr->length && index>=0) {
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++) {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main() {
    Array arr;
    int n;
    printf("Enter size of array: ");
    scanf("%d", &arr.size); // parameter is the address of the variable where it'll be stored
    arr.A = new int[arr.size];
    arr.length=0;

    printf("Enter length: ");
    scanf("%d", &n);

    printf("Enter ellements:\n");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr.A[i]);
    }
    arr.length=n;
    display(arr);

    printf("\n\nEnter a number to append: ");
    scanf("%d", &n);
    append(&arr, n);
    display(arr);

    int index;
    printf("\n\nEnter the index and the number to insert: ");
    scanf("%d %d", &index, &n);
    insert(&arr, index, n);
    display(arr);

    printf("\n\nEnter index to be deleted: ");
    scanf("%d", &index);
    printf("\n%d on index %d was deleted.", del(&arr, index), index);
    display(arr);

    delete[] arr.A;
}