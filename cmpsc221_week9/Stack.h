//
// Created by mikem on 3/12/2018.
//

#ifndef CMPSC122_1_WEEK7_STACK_H
#define CMPSC122_1_WEEK7_STACK_H

#include "DLList.h"
#define STACK_SIZE 10

template <typename T>
class Stack {
private:
    DLList<T> list;
    int size;
public:
    Stack();
    ~Stack();
    bool isEmpty();
    bool isFull();
    void clear();
    void push(T);
    T pop();    // remove the top element and return
    T top();    // return w/o removing top element

};

#endif //CMPSC122_1_WEEK7_STACK_H
