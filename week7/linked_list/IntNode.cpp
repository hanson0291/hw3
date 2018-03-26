//
// Created by mikem on 2/19/2018.
//
#include "IntNode.h"


int IntNode::getData() const {
    return data;
}

void IntNode::setData(int data) {
    IntNode::data = data;
}

IntNode *IntNode::getNext() const {
    return next;
}

void IntNode::setNext(IntNode *next) {
    IntNode::next = next;
}

IntNode::IntNode() {
//    next = 0;
    next = nullptr;
}

IntNode::IntNode(int d, IntNode *n = 0) {
    data = d;
    next = n;
}


