#include <iostream>

int main() {
    int length=10;
    int A[length]={8,9,4,7,6,3,10,5,14,2};
    int key1=5, key2=12;

    for(int i=0;i<length;i++) {
        if(A[i]==key1) {
            printf("Found key %d at index %d\n", key1, i);
        }
    }
}