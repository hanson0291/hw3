/*
Name: Andrew Hanson                
Email: awh5563@psu.edu
Class: CMPSC 122, section 001
Program: Homework 4
Due Date: October 18

Description: 

Acknowledgement:
g++ -ansi -pedantic -Wall radixsort.cxx -o radixsort
*/

#include "DLList.h"
#include <iostream>
#include <cmath>

using namespace std;

void radix_sort(DLList& list);
void read_input(DLList& list);

/* If you've used any additional functions */
/* Add forward declarations HERE           */

int main(){
    DLList list;

    read_input(list);
    cout << "\nOriginal list: \n\n" << list << endl;

    radix_sort(list);
    cout << "\nSorted list: \n\n" << list << endl;

    return 0;
}

//This function 
// 1. reads a number of integers from cin until eof
// 2. add each integer to the tail of the given list
//    in the order they were read
void read_input(DLList& list){
    while(cin >> list){
        //cout << "Unsorted List: " << list << endl;
    }
}

void radix_sort(DLList& list){

	// Declare the doubley linked list called list2
	DLList list2;
	// Usage of the append function, appending elements of Doubley linked list called list to list2 
	list2.append(list);
	// Declaring a variable called maxsize to store the size of the data, and initializing it to 0
	int maxsize = 0;

	// This while loop is used to keep track of the size of the list
	while(!list2.isEmpty()){
		maxsize++;
		list2.deleteHead();
	}
	
	// This line appends the elements of list to list2
	list2.append(list);

	// Declare and define a pointer array called pointerarray, 
	int* pointerarray = new int[maxsize];

	// This for loop decrements through the pointer array, storing the data from list2 into the pointer array
	for(int i = maxsize - 1; i >= 0; i--){
		pointerarray[i] = list2.deleteTail();
	}

	// declare and define the variable, maximus, assigning the value equivalent to 1st value in pointer array
	int maximus = pointerarray[0];

	// This for loop contains the if statement that assigns the new maximum values to maximus while iterating through the pointer array.
	for(int i = 1; i < maxsize; i++){
		if(pointerarray[i] > maxsize){
			maximus = pointerarray[i];
		}
	}

	// declare the integer variable exp, representing the exponent used, setting it equal to 1
	int exp = 1;

	// declaring and defining the integer pointer array called temporarypointer, setting it equal to a new integer array with the max size of the data.
	int *temporarypointer = new int[maxsize];
	
// This while loop contains ______ for loops
	while(maximus / exp > 0){
		// declare and define integer array called Bucket, initilizing it to 0
		int Bucket[10] = {0};

		// This for loop increments through the Bucket array, dividing by the exponent size, then takes modulus 10
		for(int i = 0; i < maxsize; i++)
			Bucket[pointerarray[i] / exp % 10]++;
		
		// This for loop increments through the Bucket array, adding the previous node to the current one
		for(int i = 1; i < 10; i++)
			Bucket[i] += Bucket[i - 1];
	
		// This for loop takes the value in the current position of the pointer array then assigns this value to a position in the temporarypointer array, particularly to the position decremented in the Bucket array, in the pointer array.
		for(int i = maxsize - 1; i >= 0; i--){
			temporarypointer[--Bucket[pointerarray[i] / exp % 10]] = pointerarray[i];
		}

		// This for loop increments through the pointerarray array and temporarypointer array simultaneously, assigning the values in the temporarypointer array to the pointerarray array.
		for(int i = 0; i < maxsize; i++)	
			pointerarray[i] = temporarypointer[i];

	// The following statement assigns the value equal to (exp * 10) to exp.  
	exp *= 10;
		
	}

	// The following for loop iterates through the list and deletes the tail, stopping when the maxsize of the data is reached.
	for(int i = 0; i < maxsize; i++){
		list.deleteTail();
	}

	// The following for loop iterates through the pointerarray and adds these values to the tail of the list. It stops when the maxsize of the data is reached.
	for(int i = 0; i < maxsize; i++){
		list.addToTail(pointerarray[i]);
	}

}
//testing

//cout << "list = " << list << endl;
//cout << "\n\nwhile loop over\n\n";

//for(int i = 0; i < maxsize; i++)
//{
//   list.addToTail(pointerarray[i]);
//}}
/*                                 */
/* If you are using any additional */
/* functions, add them HERE        */

//void push(int d){
//    array[++last] = d;
//}










