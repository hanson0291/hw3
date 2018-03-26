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
    head = NULL;
    tail = NULL;
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
    return head == NULL;
}

//
//  O(n) -> something not in list!
template<typename T>
bool SLList<T>::isInList(T d) {
    Node<T> *temp = head;
    while (temp != NULL && temp->getData() != d) {
        temp = temp->getNext();
    }
    return temp != NULL;
}

//
//  O(1)
template<typename T>
void SLList<T>::addToHead(T d) {
    head = new Node<T>(d, head);
    if (tail == NULL) {
        tail = head;
    }
}

//  O(1)
template<typename T>
void SLList<T>::addToTail(T d) {

    if (isEmpty()) {
        head = tail = new Node<T>(d, NULL);
    } else {
        tail->setNext(new Node<T>(d, NULL));
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
        head = tail = NULL;
    } else {
        Node<T> *tmp = head;
        while (tmp->getNext() != tail) {
            tmp = tmp->getNext();
        }
        delete tail;
        tail = tmp;
        tail->setNext(NULL);
    }
    return d;
}

template<typename T>
void SLList<T>::print() {

    Node<T> *tmp = head;
    if (tmp != NULL) {
        do {
            if (tmp != NULL) {
                cout << tmp->getData() << " -> ";
                tmp = tmp->getNext();
            }
        } while (tmp != NULL);
    }
}

