//
// Created by mikem on 2/19/2018.
//

#ifndef CMPSC122_1_WEEK7_NODE_H
#define CMPSC122_1_WEEK7_NODE_H

template <typename T>
class Node {
private:
    T data;
    Node<T> * next;
public:
    Node();
    Node(T, Node<T> *);

    T getData() const;
    void setData(T data);
    Node<T> *getNext() const;
    void setNext(Node<T> *next);
};

#endif //CMPSC122_1_WEEK7_NODE_H
