//
// Created by mikem on 2/19/2018.
//

#include "SLList.h"
#include <iostream>

using namespace std;

//
//  O(1)
template<typename T>
SLList<T>::SLList() {
    head = nullptr;
    tail = nullptr;
}

//
//  O(?)
template<typename T>
SLList<T>::~SLList() {
    while (!isEmpty()) {
        removeTail();
    }
}

//
//  O(1)
template<typename T>
bool SLList<T>::isEmpty() {
    return head == nullptr;
}

//
//  O(n) -> something not in list!
template<typename T>
bool SLList<T>::isInList(T d) {
    Node<T> *temp = head;
    while (temp != nullptr && temp->getData() != d) {
        temp = temp->getNext();
    }
    return temp != nullptr;
}

//
//  O(1)
template<typename T>
void SLList<T>::addToHead(T d) {
    head = new Node<T>(d, head);
    if (tail == nullptr) {
        tail = head;
    }
}

//  O(1)
template<typename T>
void SLList<T>::addToTail(T d) {

    if (isEmpty()) {
        head = tail = new Node<T>(d, nullptr);
    } else {
        tail->setNext(new Node<T>(d, nullptr));
        tail = tail->getNext();
    }

}

// O(1)
template<typename T>
T SLList<T>::removeHead() {
    T d = head->getData();
    Node<T> *tmp = head;
    head = head->getNext();
    delete tmp;
    return d;
}

//
//  O(n)
template<typename T>
T SLList<T>::removeTail() {

    T d = tail->getData();
    if (head == tail) {
        delete head;
        head = tail = nullptr;
    } else {
        Node<T> *tmp = head;
        while (tmp->getNext() != tail) {
            tmp = tmp->getNext();
        }
        delete tail;
        tail = tmp;
        tail->setNext(nullptr);
    }
    return d;
}

template<typename T>
void SLList<T>::print() {

    Node<T> *tmp = head;
    if (tmp != nullptr) {
        do {
            if (tmp != nullptr) {
                cout << tmp->getData() << " -> ";
                tmp = tmp->getNext();
            }
        } while (tmp != nullptr);
    }
}
