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
    Array() {

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

template <typename T>
void Array::append(T value) {

}


#endif