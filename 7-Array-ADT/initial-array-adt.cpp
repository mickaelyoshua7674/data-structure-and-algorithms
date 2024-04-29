#include <iostream>

struct Array {
    int *A;
    int size;
    int length;
};

void Display(Array arr) {
    printf("\nElements are:\n");
    for(int i=0;i<arr.length;i++) {
        printf("%d ", arr.A[i]);
    }
}

int main() {
    Array arr;
    int n;
    printf("Enter size of array: ");
    scanf("%d", &arr.size); // parameter is the address of the variable where it'll be stored
    arr.A = new int[arr.size];
    arr.length=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter ellements:\n");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr.A[i]);
    }
    arr.length=n;

    Display(arr);

    delete[] arr.A;
}