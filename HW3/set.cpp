//---------------------------------------------------------------------
// Name: Andrew Hanson
// Email: awh5563@psu.edu
// Class: CMPSC 122, Section 3
// Program 3.2
// Due Date: March 28, 2018, 11:59 PM
//
// Description: 
//   implement a set class. Provide an interactive command loop to test the Set class. 
// Acknowledgements:
//
//---------------------------------------------------------------------

#include <iostream>
#include "list.h"

#include <cstdio>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

// WHICH FUNCTIONS OF LIST ARE NEEDED TO CREATE THIS SET CLASS? 
class Set {
private: 
	List* list;
	int set_size;
public:
	// A SET IS A COLLECTION OF DISTINCT(UNIQUE) ITEMS 
	Set();
	~Set();
 	
	// returns a boolean value reping if provided int is contained in list
	bool contains(int value);
	// returns bool reping if provided int was successfully added to list. Sets intended to contain 
	// distinct value, do not lalow duplicate values to be added. If list already contains supplied
	// value, return false
	bool add(int value);
	bool remove(int value);
	void clear();

	Set* set_union(Set&);
	Set* intersection(Set&);
	Set* difference(Set&);

	void print();
	int size() { return set_size; }
};
Set::Set(){

}
Set::~Set(){

}
bool Set::contains(int value){

}
bool Set::add(int value){

}
bool Set::remove(int value){

}
void Set::clear(){

}
Set* Set::set_union(Set&){

}
Set* Set::intersection(Set&){

}
Set* Set::difference(Set&){

}
void Set::print(){
			//List *tmp = list;
    
			//if (tmp != NULL) {
        	//	do {
            //		if (tmp != NULL) {
            //    		//cout << tmp->getData() << " -> ";
            //    		tmp = tmp->getNext();
            //		}
        	//	} while (tmp != NULL);
    		//}

			//cout << "list = " <<list << endl;
}


int main() {

int LL1size,LL2size;
string input, input2, startsize1, startsize2, input3;
//char input;

List List1, List2;

	cout << "Enter starting size of Set #1: ";
	getline(cin, startsize1);
	istringstream ss(startsize1);
	ss >> LL1size;
	

	cout << "Enter starting size of Set #2: ";
	getline(cin, startsize2);
	//List2.addToHead(startsize2);
	//cin >> startsize2;
	istringstream ss2(startsize2);
	ss2 >> LL2size;
	
	cout << "Enter 10 values for Set #1: ";
	getline(cin, input);

		int node = 0;
		string listcopy;
		listcopy = input;

		for(int i = 0; listcopy.length() > 0; i++){
			//node = listcopy.substr(0);
			istringstream ss(listcopy);
			ss >> node;
			List1.addToTail(node);
			listcopy.erase(0,1);
		}


	cout << "Enter 4 values for Set #2: ";
	getline(cin,input2);

		int node2 = 0;
		string listcopy2;
		listcopy2 = input2;

		for(int i = 0; listcopy2.length() > 0; i++){
			istringstream ss(listcopy2);
			ss >> node2;
			List2.addToTail(node2);
			listcopy2.erase(0,1);
		}

	cout <<endl<< "Now accepting commands (quit to exit program):"<<endl<<endl;

	while(input3 != "quit") {
		cout << "> ";
		getline(cin,input3);

		if(input3.rfind("print", 0) == 0){
			input3.erase(0,6);
			int value = 0;
			istringstream ss(input3);
			ss >> value;

			if(value == 1){
				cout << "set elements(" << LL1size << "): ";
				for(int i = 0; i < value;i++){
					//cout << List1.at(i);
					List1.at(i);
				}
			}
			else if(value == 2){
				cout << "set elements(" << LL2size << "): " << input2;
			}
			else if(value != 1 && value != 2)
				cout << "ERROR!";
			//Vector.at(value, Vector);
		}

		if(input3 == "union"){

			int temp;

			//for(int i=0;i<input.length();i++){
			//	for(int j=0;j<input2.length();j++){
			//		if(input)
			//	}
			//}

			cout << "Union: ";
		}
		if(input3 == "remove")
			cout << "remove condition" << endl;

		if(input3.rfind("add", 0) == 0){
		//invoke on specified set passing index as parameter, print true or false based on result.
			input3.erase(0,3);
			int value = 0;
			istringstream ss(input3);
			ss >> value;

			//cout << "value = " << value << endl;
			if(value == 1){
				int set;
				input3.erase(0,2);
				istringstream ss(input3);
				ss >> set;
				cout << "set = " << set << endl;
				List1.addToTail(set);
				LL1size + 1;

				//cout << "set = " << set << endl;

			}
			else if(value == 2){
				int set;
				input3.erase(0,2);
				istringstream ss(input3);
				ss >> set;
				cout << "set = " << set << endl;
				List2.addToTail(set);
				LL2size + 1;
			}
			else if(value != 1 && value != 2)
				cout << "ERROR!";

		}
		



		if(input3 == "subtraction")
			cout << "subtraction!"<<endl;
		cout << endl;
	};
	
	return 0;
}



/* 

cout << "value = " << value <<endl;
cout << contains << endl;
List1.contains(contains);	
cout << List1.contains(contains);
//cout << input << endl;
		//istringstream ss(input);
		//ss >> node;
cout << "Adding Node To Tail = " << node << endl;

		//if(!isEmpty(listcopy)){
		//if(!(List1.isEmpty()))
			//List1.addToHead(listcopy[0]);
			//listcopy.erase(0,1);
			//if(listcopy[0] == ' ')
			//	delete listcopy[0];
		//}

		//List1.addToHead(node)
			//input3.erase(0,6);
			//int value = 0;
			//istringstream ss(input);
			//ss >> value;

			//cout << "value = " << value <<endl;

	//if(startsize1 > 0){
		//set1.addToHead(0);  addToHead NOT A MEMBER
		//List1.addToHead(0);
		//startsize1--;
	//}

	//set1.print();


*/