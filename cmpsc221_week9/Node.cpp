//
// Created by mikem on 2/19/2018.
//
#include "Node.h"


template<typename T>
Node<T>::Node() {
    next = 0;
}

template<typename T>
Node<T>::Node(T d, Node<T> *n) {
    data = d;
    next = n;
}

template<typename T>
T Node<T>::getData() const {
    return data;
}

template<typename T>
void Node<T>::setData(T d) {
    data = d;
}

template<typename T>
Node<T> *Node<T>::getNext() const {
    return next;
}

template<typename T>
void Node<T>::setNext(Node<T> *n) {
    next = n;
}
