#ifndef ARRAY
#define ARRAY

#include "helper-functions.hpp"
using namespace std;

template <typename T>
class Array {

private:
    T* arr;
    int size;
    int length;

    void increaseSize();

public:
    Array(T a[], int l) {
        length = l;
        size=length+1;
        arr=new T[size];
        
        for(int i=0; i<length; i++) {
            arr[i]=a[i];
        }
    }
    ~Array() {
        delete[] arr;
    }

    void rightShift();
    void leftShift();
    void display();
    void append(T value);
    void insert(int index, T value);
    T del(int index);
    T search(T key, string searchType);
    T get(int index);
    void set(int index, T value);
    T max();
    T min();
    T sum();
    T avg();
    void reverse(string reverseType);
    void insertSorted(T value);
    bool isSorted();
    void rearrange();
    Array merge(Array arr2);
    Array Union(Array arr2);
    Array intersection(Array arr2);
    Array difference(Array arr2);
};

template <typename T>
void Array<T>::increaseSize() {
    size=length+2;
    T *newArr = new T[size]; // allocate a new array with the new size
    for(int i=0; i<length; i++) { // copy all elements from previous array to the new
        newArr[i] = arr[i];
    }
    delete[] arr; // detele address of previous array
    arr=newArr; // point to the new array
    newArr=NULL; // dereference the new created pointer so there is only one pointer to the new array
}

/*
Shift array to the left and the element removed is replaced at the end of the array (rotate).
*/
template <typename T>
void Array<T>::leftShift() {
    T temp=arr[0];
    for(int i=0; i<length-1; i++) {
        arr[i]=arr[i+1];
    }
    arr[length-1]=temp;
}

/*
Shift array to the right and the element removed is replaced at the start of the array (rotate).
*/
template <typename T>
void Array<T>::rightShift() {
    T temp=arr[length-1];
    for(int i=length-1; i>0; i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

/*
Print array elements on format [e1,e2,e3,...,en]
*/
template <typename T>
void Array<T>::display(){
    cout<<"[";
    for(int i=0; i<length; i++) {
        if(arr[i]==arr[length-1]) {
            cout<<arr[i]<<"] length="<<length<<" size="<<size<<endl;
        } else {
            cout<<arr[i]<<",";
        }
    }
};

/*
If the length is less than size, there is space to insert an element at the end, so
insert at the end and increase in 1 the number of elements (length).
If the length is equal to size, increase size then insert ate the end.
*/
template <typename T>
void Array<T>::append(T value) {
    if(length==size) {
        increaseSize();
    }
    arr[length++]=value;
}

/*
Shift the array to right then insert new element at given index.
*/
template <typename T>
void Array<T>::insert(int index, T value) {
    if(length==size) {
        increaseSize();
    }
    if(index<=length && index>=0) {
        for(int i=length; i>index; i--) {
            arr[i]=arr[i-1];
        }
        arr[index]=value;
        length++;
    }
}

/*
Delete the element at given index then shift array to left.
*/
template <typename T>
T Array<T>::del(int index) {
    int value;
    if(index<length && index>=0) {
        value=arr[index];
        for(int i=index; i<length-1; i++) {
            arr[i]=arr[i+1];
        }
        length--;
        return value;
    }
    return 0;
}

#endif