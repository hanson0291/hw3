//
// Created by mikem on 3/12/2018.
//
#include "Stack.h"
#include <iostream>

using namespace std;

template<typename T>
Stack<T>::Stack() {
    size = 0;
}

template<typename T>
Stack<T>::~Stack() {
    // nothing!
}

template<typename T>
bool Stack<T>::isEmpty() {  // O(1)
//    return list.isEmpty();
    return (size == 0);
}

template<typename T>
bool Stack<T>::isFull() {   // O(1)
    return (size == STACK_SIZE);
}

template<typename T>
void Stack<T>::clear() {    // O(n)
    // removes everything!
    while (!list.isEmpty()) {
        list.removeHead();
    }
    size = 0;
}

template<typename T>
void Stack<T>::push(T data) {   // O(1)

    //
    //  Check the capacity!
    if (size == STACK_SIZE) {
        cerr << "STACK IS FULL" << endl;
    }

    size++;
    list.addToHead(data);
}

template<typename T>
T Stack<T>::pop() { // O(1)

    //
    //  Check the capacity
    if (size == 0) {
        cerr << "STACK IS EMPTY" << endl;
        return T();
    }

    size--;
    return list.removeHead();
}

template<typename T>
T Stack<T>::top() { // O(1)

    //
    //  Check the capacity
    if (size == 0) {
        cerr << "STACK IS EMPTY" << endl;
        return nullptr;
    }

    return list.getHead()->getData();
}

