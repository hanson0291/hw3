//
// Created by mikem on 2/26/2018.
//

#ifndef CMPSC122_1_WEEK7_DLNODE_H
#define CMPSC122_1_WEEK7_DLNODE_H

template <typename T>
class DLNode {
public:

    DLNode(T, DLNode<T> *, DLNode<T> *);
    DLNode();
    T getData() const;
    void setData(T data);
    DLNode<T> *getNext() const;
    void setNext(DLNode<T> *next);
    DLNode<T> *getPrev() const;
    void setPrev(DLNode<T> *prev);


private:
    T data;
    DLNode<T> *next;
    DLNode<T> *prev;
};

#endif //CMPSC122_1_WEEK7_DLNODE_H
