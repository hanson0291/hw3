//
// Created by mikem on 3/12/2018.
//

#include "ArrayQueue.h"

template<typename T>
ArrayQueue<T>::ArrayQueue() {
    head = tail = QUEUE_MAX - 1;
}

template<typename T>
ArrayQueue<T>::~ArrayQueue() {
    // nada
}

template<typename T>
bool ArrayQueue<T>::isEmpty() {
    return head == tail;
}

template<typename T>
bool ArrayQueue<T>::isFull() {
    return head == (tail + 1) % QUEUE_MAX;
}

template<typename T>
void ArrayQueue<T>::clear() {
    head = tail = QUEUE_MAX - 1;
}

template<typename T>
void ArrayQueue<T>::enqueue(T data) {
    // enqueue operates on tail!
    tail = (tail + 1) % QUEUE_MAX;
    storage[tail] = data;
}

template<typename T>
T ArrayQueue<T>::dequeue() {
    // operates on head
    head = (head + 1) % QUEUE_MAX;
    return storage[head];
}

template<typename T>
T ArrayQueue<T>::top() {
    return storage[(head + 1) % QUEUE_MAX];
}

