#include <iostream>

using namespace std;

#include <string>

#include "IntNode.h"

#include "Node.h"
#include "Node.cpp"

#include "SLList.h"
#include "SLList.cpp"

#include "DLNode.h"
#include "DLNode.cpp"
#include "DLList.h"
#include "DLList.cpp"

#include "Queue.h"
#include "Queue.cpp"

#include "Stack.h"
#include "Stack.cpp"
#include "ArrayStack.h"
#include "ArrayStack.cpp"
#include "ArrayQueue.h"
#include "ArrayQueue.cpp"

#include <string>

int main() {

    //
    //  Stack of stuff...
    ArrayStack<string> pokemon;
    pokemon.push("pikachu");
    pokemon.push("charmander");
    pokemon.push("snorlax");
    pokemon.pop();  // snorlax!
    pokemon.push("gengar");
    pokemon.push("diglet");
    pokemon.push("squirtle");
    pokemon.pop();  // squirtle
    pokemon.pop();  // diglet
    pokemon.pop();  // gengar
    pokemon.pop();  // charmander
    pokemon.pop();  // pikachu
    pokemon.pop();  // ??????? (who's that pokemon?)


    //
    //  Queue -> FIFO (first in first out)
    ArrayQueue<string> sheetz;
    sheetz.enqueue("Schmuffin");
    sheetz.enqueue("Coffee with hashbrown");
    sheetz.enqueue("Big Mozz");

    // payment
    string pay = sheetz.dequeue();
    cout << pay << " paid for their item" << endl;  //schmuffin
    pay = sheetz.dequeue();
    cout << pay << " paid for their item" << endl;  // coffee with hash

    sheetz.enqueue("Quesadilla");

    pay = sheetz.dequeue();
    cout << pay << " paid for their item" << endl;  //Big Mozz

    if (sheetz.isEmpty()) {
        cout << "Line is empty" << endl;
    } else {
        cout << "People in line" << endl;
    }




    // crypto currencies
    DLList<string> crypto;
    crypto.addToTail("Bitcoin");
    crypto.addToTail("Ethereum");
    crypto.addToTail("Litecoin");
    crypto.addToTail("Dogecoin");
    crypto.addToTail("Stratis");
    crypto.print();
    crypto.printReverse();

    // list example
//    SLList<string> actors;
//    actors.addToTail("larry");
//    actors.addToTail("moe");
//    actors.addToTail("curly");
//    actors.print();

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