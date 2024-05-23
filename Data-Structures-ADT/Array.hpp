#ifndef ARRAY
#define ARRAY

#include <iostream>
#include "helper-functions.hpp"
using namespace std;

template <typename T>
class Array {

private:
    T* arr;
    int size;
    int length;

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

    friend ostream& operator<<(ostream& out, const Array a) {
        out<<"[";
        for(int i=0; i<a.length; i++) {
            if(a.arr[i]==a.arr[a.length-1]) {
                out<<a.arr[i]<<"]";
            } else {
                out<<a.arr[i]<<",";
            }
        }
        return out;
    }

    void append(T value);
    void insert(T index, T value);
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

#endif