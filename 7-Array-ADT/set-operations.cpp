#include <iostream>
using namespace std;

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

Array Union(Array *a, Array *b) {
    Array c;
    int i=0,j=0,k=0;

    while(i<a->length && j<b->length) {
        if(a->A[i] < b->A[j]) {
            c.A[k++]=a->A[i++];
        } else if (b->A[j] < a->A[i]) {
            c.A[k++]=b->A[j++];
        } else {
            c.A[k++]=a->A[i++];
            j++;
        }
    }

    for(; i<a->length; i++) {
        c.A[k++]=a->A[i];
    }
    for(; j<b->length; j++) {
        c.A[k++]=b->A[j];
    }

    c.length=k;
    c.size=c.length+1;
    return c;
}

Array intersection(Array *a, Array *b) {
    Array c;
    int i=0,j=0,k=0;

    while(i<a->length && j<b->length) {
        if(a->A[i] < b->A[j]) {
            i++;
        } else if (b->A[j] < a->A[i]) {
            j++;
        } else {
            c.A[k++]=a->A[i++];
            j++;
        }
    }

    c.length=k;
    c.size=c.length+1;
    return c;
}

Array difference(Array *a, Array *b) {
    Array c;
    int i=0,j=0,k=0;

    while(i<a->length && j<b->length) {
        if(a->A[i] < b->A[j]) {
            c.A[k++]=a->A[i++];
        } else if (b->A[j] < a->A[i]) {
            j++;
        } else {
            i++;j++;
        }
    }

    for(; i<a->length; i++) {
        c.A[k++]=a->A[i];
    }

    c.length=k;
    c.size=c.length+1;
    return c;
}

int main() {
    Array arr1={{2,6,10,15,25},10,5};
    Array arr2={{3,6,7,15,20},10,5};
    display(arr1);
    display(arr2);

    cout<<endl<<endl;
    cout<<"Union";
    display(Union(&arr1, &arr2));

    cout<<endl<<endl;
    cout<<"Intersection";
    display(intersection(&arr1, &arr2));

    cout<<endl<<endl;
    cout<<"Difference";
    display(difference(&arr1, &arr2));
}