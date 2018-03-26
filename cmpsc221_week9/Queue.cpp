//
// Created by mikem on 3/12/2018.
//

#include "Queue.h"

template<typename T>
Queue<T>::Queue() {
    // nothing!
}

template<typename T>
Queue<T>::~Queue() {
    // nada
}

template<typename T>
bool Queue<T>::isEmpty() {
    return list.isEmpty();
}

template<typename T>
void Queue<T>::clear() {
    while (!list.isEmpty()) {
        list.removeTail();
    }
}

template<typename T>
void Queue<T>::enqueue(T data) {
    list.addToTail(data);
}

template<typename T>
T Queue<T>::dequeue() {
    return list.removeHead();
}

template<typename T>
T Queue<T>::top() {
    // give us the first element in the queue
    // but not remove it!
    return list.getHead()->getData();
}
