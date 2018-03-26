//
// Created by mikem on 3/12/2018.
//

#ifndef CMPSC122_1_WEEK7_QUEUE_H
#define CMPSC122_1_WEEK7_QUEUE_H

#include "DLList.h"

template <typename T>
class Queue {

private:
    DLList<T> list;

public:
    Queue();
    ~Queue();
    bool isEmpty();
    void clear();
    void enqueue(T);
    T dequeue();
    T top();

};

#endif //CMPSC122_1_WEEK7_QUEUE_H
