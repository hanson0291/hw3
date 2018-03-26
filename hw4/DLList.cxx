// Name: Andrew Hanson
// Email: awh5563@psu.edu
// Student ID: 953406579
// Class: CMPSC 122, section 001
// Program 4.2
// Due Date: October 25, 2017
//
// Description: This programn implements my own DLList Abstract Data Type (ADT).
// All of the methods from the header file DLList.h have been implemented.

#ifndef _DLLIST_H

#include <cstddef>
#include <istream>
#include <ostream>
#include "DLList.h"
#include <iostream>

using namespace std;

// This is the constructor for DLList. It sets the head and the tail to NULL
DLList::DLList(){
	head = tail = NULL;
}

// This is the destructor for DLList. It deletes the head when the list is empty
DLList::~DLList(){
	while(!isEmpty()){
		deleteHead();
	}
}

// This boolean function isEmpty() returns the head equal to NULL
bool DLList::isEmpty(){
    return head == NULL;
}

// This boolean function isInList() returns a temp variable that is not equal to NULL. 
bool DLList::isInList(int d){
	DLNode * temp = head;

	while(temp && temp->data != d)
		temp = temp->next;
	return temp != NULL;

}

// This function adds the argument d to the head of the Doubley linked list
void DLList::addToHead(int d){
       if(isEmpty()){
		head = tail = new DLNode(d,NULL,NULL);
	} else {
		head = new DLNode(d,NULL,head);
		head->next->prev = head;
	}
}

// This functions adds the argument d to the tail of the doubley linked list
void DLList::addToTail(int d){
	if(isEmpty()){
		head = tail = new DLNode(d, NULL, NULL);
	}
	else{
		tail->next = new DLNode(d,tail,NULL);
		tail = tail-> next;
	}
}

// This function deletes the head of the doubley linked list to which the function is being called to 
int DLList::deleteHead(){

	DLNode* deleterunner = head->next;

	//if(head == tail){
			
	//	delete head;
	//	head = tail = NULL;
			
	//}

	if(deleterunner != NULL){		
		deleterunner->prev = NULL;
	}

	int x = head->data;
	delete head;
	head = deleterunner;

	return x;
}

// This function deletes the tail of the doubley linked list to which the function is being called to
int DLList::deleteTail(){   

	DLNode* tailrunner = tail->prev;
	int d = head->data;
	
	if(head == tail){
		delete head;
		head = tail = NULL;
	}
	else {		
		tail = tail->prev;
		delete tailrunner->next;
		tailrunner->next = NULL;
	}

	return d;
}

// This function removes all the nodes in the doubley linkey list
void DLList::removeAll(){
	if(!isEmpty()){
		deleteHead();
	}
	head = tail = NULL;
}

// This function appends the contents of one doubley linked list to another by iterating through the nodes then adding them to the tail, using the addToTail function.
void DLList::append(const DLList& dll){
	
DLNode*	noderunnerAppend = dll.head;

	while(noderunnerAppend != NULL){
		addToTail(noderunnerAppend->data);
		noderunnerAppend = noderunnerAppend->next_node();
		
	}
}

// This is the ostream operator function, handles the output to the ADT
ostream& operator<< (ostream& os, const DLList& l){
	
//int count = 0;
//cout << "It didn't fail yet";

DLNode* noderunner = l.head; 
int count = 0;
	
	while(noderunner != NULL){
		for(int i = 0; i < 10; i++){

				
			if(noderunner != NULL){
				os << *noderunner << " "; 
				noderunner = noderunner->next_node();
			}

		}
		os << endl;			
	}
	return os;
}

// This is the istream operator function, handles the input to the ADT
istream& operator>> (istream& is, DLList& l){

//DLNode* noderunner = l.head; 
	int input = 0;
	is >> input;

	if(!(is.eof())){
		l.addToTail(input);
	}
	return is;

}

#endif
