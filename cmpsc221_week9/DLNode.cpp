//
// Created by mikem on 2/26/2018.
//

#include "DLNode.h"

template<typename T>
T DLNode<T>::getData() const {
    return data;
}

template<typename T>
void DLNode<T>::setData(T data) {
    DLNode::data = data;
}

template<typename T>
DLNode<T> *DLNode<T>::getNext() const {
    return next;
}

template<typename T>
void DLNode<T>::setNext(DLNode<T> *next) {
    DLNode::next = next;
}

template<typename T>
DLNode<T> *DLNode<T>::getPrev() const {
    return prev;
}

template<typename T>
void DLNode<T>::setPrev(DLNode<T> *prev) {
    DLNode::prev = prev;
}

template<typename T>
DLNode<T>::DLNode() {
    next = prev = nullptr;
}

template<typename T>
DLNode<T>::DLNode(T d, DLNode<T> *p, DLNode<T> *n) {
    data = d;
    prev = p;
    next = n;
}
