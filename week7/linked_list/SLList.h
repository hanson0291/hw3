//
// Created by mikem on 2/19/2018.
//

#ifndef CMPSC122_1_WEEK7_SLLIST_H
#define CMPSC122_1_WEEK7_SLLIST_H

#include "Node.h"

template <typename T>
class SLList {
private:
    Node<T> *head;
    Node<T> *tail;
public:
    SLList();
    ~SLList();
    bool isEmpty();
    bool isInList(T);
    void addToHead(T);
    void addToTail(T);
    T removeHead();
    T removeTail();
    void print();
};



#endif //CMPSC122_1_WEEK7_SLLIST_H

