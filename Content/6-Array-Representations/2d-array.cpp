#include <iostream>

int main() {
    int nRows = 3;
    int nColumns = 4;

    // 2D ARRAY ENTIRELY IN STACK MEMORY
    int A[nRows][nColumns]={{1,2,3,4},{2,4,6,8},{3,5,7,9}};
    printf("2d Array in stack memory:\n");
    for(int i=0;i<nRows;i++) {
        for(int j=0;j<nColumns;j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // POINTERS IN STACK TO A 2D ARRAY IN HEAP MEMORY
    int *B[nRows]; // array of integer pointers / tree pointers in stack pointing to tree arrays in heap
    for(int i=0;i<nRows;i++) {
        B[i] = new int[nColumns];
    }
    printf("2d Array in heap memory with an array of pointers:\n");
    for(int i=0;i<nRows;i++) {
        for(int j=0;j<nColumns;j++) {
            B[i][j]=A[i][j];
        }
    }
    for(int i=0;i<nRows;i++) {
        for(int j=0;j<nColumns;j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<nRows;i++) {
        delete[] B[i]; // dealocate all tree new arrays in heap
    }
    printf("\n");

    // DOUBLE POINTER TO AN 2D ARRAY IN HEAP MEMORY
    int **C;
    C = new int*[nRows]; // pointing to an array in heap that will have others arrays also in heap / one pointer in stack pointing to an 2d array in heap
    for(int i=0;i<nRows;i++) {
        C[i] = new int[nColumns];
    }
    printf("2d Array in heap memory with a double pointer:\n");
    for(int i=0;i<nRows;i++) {
        for(int j=0;j<nColumns;j++) {
            C[i][j]=A[i][j];
        }
    }
    for(int i=0;i<nRows;i++) {
        for(int j=0;j<nColumns;j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }for(int i=0;i<nRows;i++) {
        delete[] C[i]; // dealocate all tree new arrays in heap
    }
    delete[] C; // dealocate double pointer C
}