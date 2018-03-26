#include <iostream>

using namespace std;

#include <string>

#include "IntNode.h"

#include "Node.h"
#include "Node.cpp"

#include "SLList.h"
#include "SLList.cpp"

int main() {

    // list example
    SLList<string> actors;
    actors.addToTail("larry");
    actors.addToTail("moe");
    actors.addToTail("curly");
    actors.print();

    // Examples with template node
    /*
    Node<int> *p, *q, *r;
    p = new Node<int>();
    p->setData(10);
    r = p;
    p = new Node<int>(20, nullptr);
    q = new Node<int>(30, p);
    delete p, q, r;
     */

    // Examples with int node
    /*
    IntNode *p, *q, *r;
    p = new IntNode();
    p->setData(10);
    r = p;
    p = new IntNode(20, nullptr);
    q = new IntNode(30, p);
    delete p, q, r;
    */

    return 0;
}
