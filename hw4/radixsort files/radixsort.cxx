/*
 *
 *
 *
 *
 *
 *
 *
 
Name: Andrew Hanson                
Email: awh5563@psu.edu
Class: CMPSC 122, section 001
Program: Homework 4
Due Date: October 18

Description: 

Acknowledgement:
g++ -ansi -pedantic -Wall _ -o _ 

*/

#include "DLList.h"
#include <iostream>
#include <cmath>

using namespace std;

void radix_sort(DLList& list);
void read_input(DLList& list);

/*                                         */
/* If you've used any additional functions */
/* Add forward declarations HERE           */
/*                                         */



// main function
// - reads a number of integers from cin into a DLList
// - sorts the list
// - prints the sorted list to cout
int main()
{
  DLList list;

  read_input(list);
  cout << "\nOriginal list: \n\n" << list << endl;

  radix_sort(list);
  cout << "\nSorted list: \n\n" << list << endl;

  return 0;
}


// This function 
// 1. reads a number of integers from cin until eof
// 2. add each integer to the tail of the given list
//    in the order they were read
//
// NOTE: You must use the overloaded friend operator >>
//       defined in DLList.h to read a number of integers
//       into the list.
void read_input(DLList& list)
{

    while(cin >> list){
        //cout << "Unsorted List: " << list << endl;
    }

}
void radix_sort(DLList& list)
{
    //creating new list and using the append function
    DLList list2;
    list2.append(list);
   
    //getting the size of the list
    int size = 0;
    while(!list2.isEmpty())
    {
    size++;
    list2.deleteHead();
    }


    //adding all the stuff from list into list2
    list2.append(list);

   

    //making a pointer array that stores the list2 data
    int* array = new int[size];
    for (int x = size - 1; x >= 0; x--)
    {
        array[x] = list2.deleteTail();
       
    }



  int max = array[0];


  for (int x = 1; x < size; x++)
  {
    if (array[x] > max)
      max = array[x];
  }

 
  int exp = 1;
  int *tmpBuffer = new int[size];
  while (max / exp > 0)
  {
    int decimalBucket[10] = {  0 };
 
    for (int x = 0; x < size; x++)
      decimalBucket[array[x] / exp % 10]++;



    for (int x = 1; x < 10; x++)
      decimalBucket[x] += decimalBucket[x - 1];


    for (int x = size - 1; x >= 0; x--)
      tmpBuffer[--decimalBucket[array[x] / exp % 10]] = array[x];
    for (int x = 0; x < size; x++)
      array[x] = tmpBuffer[x];

	
    exp *= 10;

}

    for (int x =0; x < size; x++)
    {

    list.deleteTail();
    }



    for (int x = 0; x < size; x++)
    {    
    list.addToTail(array[x]);
    }
}

// This function
// 1. implements radix sort
// 2. should not depend on the prior information on the 
//    maximum number of digits of the numbers in the list.
/*
void radix_sort(DLList& list){
 
cout << "\n\nRadixSort Function initiated\n\n" << endl;

DLList list2;
list2.append(list);

int counter = 0;
int Bucket[10] = {0};
int exp = 1;
// This loop deletes the tail of list2 until list2 is empty 
while(!list2.isEmpty()){
    counter++;
    list2.deleteTail();
}    cout << "counter = " << counter << endl;
//    cout << "list2 = " << list2 << endl;
    

int *pointerarray = new int [counter];
int *temporaryarray = new int[counter];
int maxsize = pointerarray[0];
list.removeAll();    

// This loop finds the max size via pointer array, then ...
for (int x = 0; x < counter; x++)
{
    if (pointerarray[x] > maxsize)
    {
        maxsize = pointerarray[x];
        cout << "maxsize = " << maxsize << endl;
     }
}

cout << "maxsize = " << maxsize;

// This loop does most of the work
while((maxsize / exp) > 0)
{
cout << "maxsize = " << maxsize << endl;

        for(int i = 0; i < counter; i++){      
           Bucket[pointerarray[i] / exp % 10]++;  
        }    
      
        for(int i = 0; i < 10; i++){
            Bucket[i] += Bucket[i-1];
        }


        for(int i = maxsize - 1; i >= 0; i--){
            temporaryarray[--Bucket[pointerarray[i] / exp % 10]] = pointerarray[i];
        
     }
  

        for(int i = 0; i < 10; i++){
            pointerarray[i] = temporaryarray[i];
        }
   exp *= 10;
} 

//testing
cout << "list = " << list << endl;



cout << "\n\nwhile loop over\n\n";



for(int i = 0; i < maxsize; i++)
{
    list.addToTail(pointerarray[i]);


}}
/*                                 */
/* If you are using any additional */
/* functions, add them HERE        */

//void push(int d){
//    array[++last] = d;
//}

