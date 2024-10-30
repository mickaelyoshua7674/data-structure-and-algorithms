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

int binarySearch(Array arr, int key) {
    int low=0;
    int high=arr.length-1;
    int mid;

    while(low<=high) {
    mid=(low+high)/2;

        if(key==arr.A[mid]){
            return mid;
        } else if(key<arr.A[mid]) {
            high=mid-1;
        } else {
            low=mid+1;
        }
    }
    return -1;
}

int binarySearchRecursion(int a[], int low, int high, int key) {
    int mid;

    if(low<=high) {
        mid=(low+high)/2;

        if(key==a[mid]) {
            return mid;
        } else if(key<a[mid]) {
            return binarySearchRecursion(a,low,mid-1,key);
        } else {
            return binarySearchRecursion(a,mid+1,high,key);
        }
    }
    return -1;
}

int main() {
    Array arr={{3,4,5,6},10,4};
    int key=5;
    display(arr);
    printf("\n\nBinary Search index %d", binarySearch(arr,key));
    printf("\n\nRecursive Binary Search index %d", binarySearchRecursion(arr.A,0,arr.length-1,key));

}