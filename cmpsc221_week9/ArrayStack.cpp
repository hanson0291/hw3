//
// Created by mikem on 3/12/2018.
//

#include "ArrayStack.h"
#include <iostream>

using namespace std;

template<typename T>
ArrayStack<T>::ArrayStack() {
    last = -1;
    size = 0;
}

template<typename T>
ArrayStack<T>::~ArrayStack() {

}

template<typename T>
bool ArrayStack<T>::isEmpty() {
    return (size == 0);
}

template<typename T>
bool ArrayStack<T>::isFull() {
    return (size == STACK_SIZE);
}

template<typename T>
void ArrayStack<T>::clear() {   // O(1)
    last = -1;
    size = 0;
}

template<typename T>
void ArrayStack<T>::push(T data) {  // O(1)
    //
    //  Check the capacity!
    if (size == STACK_SIZE) {
        cerr << "STACK IS FULL" << endl;
    }

    storage[++last] = data;
    ++size;
}

template<typename T>
T ArrayStack<T>::pop() {    // O(1)
    //
    //  Check the capacity
    if (size == 0) {
        cerr << "STACK IS EMPTY" << endl;
        return T();
    }
    T data = storage[last--];
    size--;
    return data;
}

template<typename T>
T ArrayStack<T>::top() {    // O(1)
    //
    //  Check the capacity
    if (size == 0) {
        cerr << "STACK IS EMPTY" << endl;
        return T();
    }
    return storage[last];
}


