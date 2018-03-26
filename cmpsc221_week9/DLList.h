//
// Created by mikem on 2/26/2018.
//

#ifndef CMPSC122_1_WEEK7_DLLIST_H
#define CMPSC122_1_WEEK7_DLLIST_H

#include "DLNode.h"

template <typename T>
class DLList {

public:

    DLList();
    ~DLList();
    bool isEmpty();
    bool isInList(T);
    void addToHead(T);
    void addToTail(T);
    T removeHead();
    T removeTail();
    void print();
    void printReverse();
    DLNode<T> *getHead() const;
    void setHead(DLNode<T> *head);
    DLNode<T> *getTail() const;
    void setTail(DLNode<T> *tail);

private:
    DLNode<T> *head;
    DLNode<T> *tail;
};

#endif //CMPSC122_1_WEEK7_DLLIST_H
