#include <iostream>

void func(int A[], int n) {
    // arrays are always passed by address
    // so A is a pointer to the start of the
    // passed array
    
    // use int *A indicates a pointer to any integer
    // but int A[] is a pointer to exclusive an array
    for (int i=0; i<n; i++) {
        printf("%d ", A[i]);
    }
    A[0] = 12;
    printf("\n");
}

// function that returns an array (pointer)
// some compilers accept [] intead of *
int * createArray(int n) {
    int *p = (int *)malloc(n*sizeof(int));
    for (int i=0; i<n; i++) {
        p[i] = i+1;
    }
    return p;
}

int main() {
    int size = 5;
    int A[size] = {2,4,6,8,10};
    func(A,size);

    for (int i=0; i<size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    int *B = createArray(size);
    for (int i=0; i<size; i++) {
        printf("%d ", B[i]);
    }
    free(B);
}