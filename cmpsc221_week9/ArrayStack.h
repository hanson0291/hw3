//
// Created by mikem on 3/12/2018.
//

#ifndef CMPSC122_1_WEEK7_ARRAYSTACK_H
#define CMPSC122_1_WEEK7_ARRAYSTACK_H

#define STACK_SIZE 10

template <typename T>
class ArrayStack {
private:
//    DLList<T> list;
    T storage[STACK_SIZE];
    int last;
    int size;
public:
    ArrayStack();
    ~ArrayStack();
    bool isEmpty();
    bool isFull();
    void clear();
    void push(T);
    T pop();    // remove the top element and return
    T top();    // return w/o removing top element

};

#endif //CMPSC122_1_WEEK7_ARRAYSTACK_H
