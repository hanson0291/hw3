//
// Created by mikem on 3/12/2018.
//

#ifndef CMPSC122_1_WEEK7_ARRAYQUEUE_H
#define CMPSC122_1_WEEK7_ARRAYQUEUE_H

#define QUEUE_MAX 10

template <typename T>
class ArrayQueue {

private:
    T storage[QUEUE_MAX];
    int head, tail;

public:
    ArrayQueue();
    ~ArrayQueue();
    bool isEmpty();
    bool isFull();
    void clear();
    void enqueue(T);
    T dequeue();
    T top();

};

#endif //CMPSC122_1_WEEK7_ARRAYQUEUE_H
