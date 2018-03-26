/*************************************************************************
 *  CMPSC 122                                                            *
 *  Startup code for HW 4                                                *
 *  October 12, 2017                                                     *
 *  Sukmoon Chang                                                        *
 *  sukmoon@psu.edu                                                      *
 *                                                                       *
 *                                                                       *
 *  Description:                                                         *
 *                                                                       *
 *  This is a header file for a doubly-linked list ADT                   *
 *  Do not modify any codes in this file                                 *
 *                                                                       *
 *  Please report any bug to sukmoon@psu.edu                             *
 *************************************************************************/  
 

#ifndef _DLLIST_H


#include <cstddef>
#include <istream>
#include <ostream>

using namespace std;


// ADT for the nodes in Doubly Linked List
class DLNode
{
private:
  int data;
  DLNode *prev, *next;

public:
  DLNode() {
    next = prev = NULL;
  }

  DLNode(int d, DLNode *p=NULL, DLNode *n=NULL) {
    data = d;
    prev = p;
    next = n;
  }

  DLNode* next_node() {
    return next;
  }

  DLNode* prev_node() {
    return prev;
  }
  
  friend ostream& operator<< (ostream& os, const DLNode& n) {
    os << n.data;
    return os;
  }

  friend class DLList;
};



// ADT for Doubly Linked List
class DLList
{
 private:
  DLNode *head, *tail;

 public:

  DLList();             // creates an empty list
  ~DLList();            // delete all node in the list

  bool isEmpty();       // is this list empty?
  bool isInList(int);   // is this list contain the given integer?
  
  void addToHead(int);  // add the given integer to the head
  void addToTail(int);  // add the given integer to the tail


  // DO NOT call this method on empty list
  // remove from the head and return the removed integer
  int deleteHead();     


  // DO NOT call this method on empty list
  // remove from the tail and return the removed integer
  int deleteTail();     


  // remove every element from this list
  void removeAll();     


  // append the given list at the end of this list
  // using **deep copying**
  void append(const DLList& dll);


  // output each element in this list to 'os'
  // at most 10 elements per line
  friend ostream& operator<< (ostream& os, const DLList& l);


  // read an integer from 'is'
  // and add it to the tail of this list
  friend istream& operator>> (istream& is, DLList& l);
};



#endif
