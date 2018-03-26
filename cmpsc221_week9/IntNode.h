//
// Created by mikem on 2/19/2018.
//

#ifndef CMPSC122_1_WEEK7_INTNODE_H
#define CMPSC122_1_WEEK7_INTNODE_H

class IntNode {
private:
    int data;
    IntNode * next;
public:
    IntNode();
    IntNode(int, IntNode *);

    int getData() const;
    void setData(int data);
    IntNode *getNext() const;
    void setNext(IntNode *next);
};

#endif //CMPSC122_1_WEEK7_INTNODE_H
