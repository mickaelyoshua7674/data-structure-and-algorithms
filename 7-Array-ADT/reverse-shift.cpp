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

/*
Reverse order of an array using an auxiliar array to copy and reverse.
*/
void reverseAuxiliarArray(Array *a) {
    Array b=*a;
    for(int i=a->length-1,j=0; i>=0; i--,j++) {
        b.A[j]=a->A[i];
    }
    for(int i=0;i<b.length;i++) {
        a->A[i]=b.A[i];
    }
}

/*
Reverse order of array by swaping the elements.
*/
void reverseSwap(Array *a) {
    for(int i=0,j=a->length-1; i<j; i++,j--) {
        swap(&a->A[i], &a->A[j]);
    }
}

/*
Shift array to the left and the element removed is replaced at the end of the array (rotate).
*/
void leftShift(Array *a) {
    int temp=a->A[0];
    for(int i=0;i<a->length-1;i++) {
        a->A[i]=a->A[i+1];
    }
    a->A[a->length-1]=temp;
}


/*
Shift array to the right and the element removed is replaced at the start of the array (rotate).
*/
void rightShift(Array *a) {
    int temp=a->A[a->length-1];
    for(int i=a->length-1;i>0;i--) {
        a->A[i]=a->A[i-1];
    }
    a->A[0]=temp;
}

int main() {
    Array arr={{2,3,4,5,6},10,5};
    display(arr);

    reverseAuxiliarArray(&arr);
    display(arr);

    reverseSwap(&arr);
    display(arr);

    leftShift(&arr);
    display(arr);

    printf("\n\n");
    rightShift(&arr);
    display(arr);

    rightShift(&arr);
    display(arr);
}