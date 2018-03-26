//
// Created by mikem on 2/26/2018.
//

#include "DLList.h"
#include <iostream>

using namespace std;

template<typename T>
DLList<T>::DLList() {
    head = tail = nullptr;
}

template<typename T>
DLList<T>::~DLList() {
    while (! isEmpty()) {
        removeTail();
    }
}
template<typename T>
bool DLList<T>::isEmpty() {
    return head == nullptr;
}

template<typename T>
bool DLList<T>::isInList(T d) { // O(N)
    DLNode<T> *temp = head;
    while (temp != nullptr && temp->getData() != d) {
        temp = temp->getNext();
    }
    return temp != nullptr;
}

template<typename T>
void DLList<T>::addToHead(T d) { // O(1)
    if (head == nullptr) {
        head = tail = new DLNode<T>(d, nullptr, nullptr);
    } else {
        head = new DLNode<T>(d, nullptr, head);
        head->getNext()->setPrev(head);
    }
}

template<typename T>
void DLList<T>::addToTail(T d) {    // O(1)
    if (isEmpty()) {
        head = tail = new DLNode<T>(d, nullptr, nullptr);
    } else {
        tail = new DLNode<T>(d, tail, nullptr);
        tail->getPrev()->setNext(tail);
    }
}

template<typename T>
T DLList<T>::removeHead() { // O(1)
    T d = head-> getData();
    if (head == tail) {
        delete tail;
        head = tail = nullptr;
    } else {
        head = head->getNext();
        delete head->getPrev();
        head->setPrev(nullptr);
    }
    return d;
}

template<typename T>
T DLList<T>::removeTail() { // O(1)
    T d = head->getData();
    if (head == tail) {
        delete tail;
        head = tail = nullptr;
    } else {
        tail = tail->getPrev();
        delete tail->getNext();
        tail->setNext(nullptr);
    }
    return d;
}

template<typename T>
void DLList<T>::print() {
    DLNode<T> *tmp = head;
    if (tmp != nullptr) {
        do {
            if (tmp != nullptr) {
                cout << tmp->getData() << " -> ";
                tmp = tmp->getNext();
            }
        } while (tmp != nullptr);
    }
}

template<typename T>
DLNode<T> *DLList<T>::getHead() const {
    return head;
}

template<typename T>
void DLList<T>::setHead(DLNode<T> *head) {
    DLList::head = head;
}

template<typename T>
DLNode<T> *DLList<T>::getTail() const {
    return tail;
}

template<typename T>
void DLList<T>::setTail(DLNode<T> *tail) {
    DLList::tail = tail;
}

template<typename T>
void DLList<T>::printReverse() {
    DLNode<T> *tmp = tail;
    if (tmp != nullptr) {
        do {
            if (tmp != nullptr) {
                cout << tmp->getData() << " <- ";
                tmp = tmp->getPrev();
            }
        } while (tmp != nullptr);
    }
}
