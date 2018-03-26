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
 *  This is a test program for a doubly-linked list ADT.                 *
 *  You may modify this file in any way to perform additional test.      *
 *                                                                       *
 *  Please report any bug to sukmoon@psu.edu                             *
 *************************************************************************/  



#include "DLList.h"
#include <iostream>

using namespace std;


int main()
{


  DLList l1;

  cout << "li contains => " << l1 << endl;
  if (l1.isEmpty()) cout << "l1 is empty" << endl;
  else cout << "l1 is not empty" << endl;
  cout << endl;

  l1.addToHead(0);
  l1.addToHead(1);
  l1.addToHead(2);
  l1.addToHead(3);
  l1.addToHead(4);

  cout << "l1 now contains => " << l1 << endl;
  if (l1.isEmpty()) cout << "l1 is empty" << endl;
  else cout << "l1 is not empty" << endl;
  cout << endl;


  if (l1.isInList(3))
    cout << "3 is in list" << endl;
  else
    cout << "3 is not in list" << endl;
  cout << endl;


  if (l1.isInList(10))
    cout << "10 is in list" << endl;
  else
    cout << "10 is not in list" << endl;
  cout << endl;


  l1.addToTail(10);
  l1.addToTail(20);
  l1.addToTail(30);
  l1.addToTail(40);
  l1.addToTail(50);
  cout << "list contains => " << l1 << endl;


  if (!l1.isEmpty()) {
    cout << "after deleting the head (" << l1.deleteHead() << ")" << endl;
    cout << "list contains => " << l1 << endl << endl;
  }


  if (!l1.isEmpty()) {
    cout << "after deleting the tail (" << l1.deleteTail() << ")" << endl;
    cout << "list contains => " << l1 << endl << endl;
  }


  DLList l2;
  cout << "l1 contains => " << l1 << endl;
  cout << "l2 contains => " << l2 << endl;
  l1.append(l2);
  cout << "after appending, l1 contains => " << endl;
  cout << l1 << endl << endl;


  cerr << "Enter the numbers for list 2 (followed by enter and ctrl+D at the end) => ";

  while (cin >> l2) {}
  cerr << endl << endl;
  
  cout << "l1 contains => " << l1 << endl;
  cout << "l2 contains => " << l2 << endl;
  l1.append(l2);
  cout << "after appending, l1 contains => " << endl;
  cout << l1 << endl << endl;

  l2.removeAll();
  cout << "after l2.removeAll(), l2 contains => " << l2 << endl;
  cout << "but, l1 still contains => "  << endl;
  cout << l1 << endl;
  cout << "since append() does the deep copying" << endl;
  
  return 0;
}
