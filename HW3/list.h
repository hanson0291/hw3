//---------------------------------------------------------------------
// Name: Andrew Hanson 
// Email: awh5563@psu.edu
// Class: CMPSC 122, Section 3
// Program 3.1
// Due Date: March 28, 2018, 11:59 PM
//
// Description: Contains List class implemenation that will be 
// used to implement Set class. I have defined the removeAt, remove, at, valueOf, 
// getNext and getPrevious functions.
//
// Acknowledgements:
// 
//---------------------------------------------------------------------

using namespace std;

class ListNode
{
private: 
	int data;
	ListNode* prev;
	ListNode* next;

public:
	ListNode() { prev = next = NULL; }
	ListNode(int d, ListNode* p, ListNode* n) { data = d; prev = p; next = n; }

	friend class List;
};

class List
{
private:
	ListNode* head;
	ListNode* tail;

public:
	List() { head = tail = NULL; }
	~List();

	bool isEmpty() { return head == NULL; }
	bool contains(int value);

	void addToHead(int value);
	void addToTail(int value);

	int removeHead();
	int removeTail();

	int removeAt(int index);
	bool remove(int value);

	int at(int index);
	int valueOf(const ListNode* elem);
	const ListNode* getNext(const ListNode* node);
	const ListNode* getPrevious(const ListNode* node);
	const ListNode* getHead() { return head; }
	const ListNode* getTail() { return tail; }
};

List::~List()
{
	while (!isEmpty())
		removeTail();
}

bool List::contains(int value)
{
//Returns a boolean value representing if the provided int value is contained
//in the list

	ListNode *temp = head;
	while (temp != NULL && temp->data != value)
		temp = temp->next;

	return temp != NULL;
}

void List::addToHead(int value)
{
	if (isEmpty())
	{
		head = tail = new ListNode(value, NULL, NULL);
	}
	else
	{
		head = new ListNode(value, NULL, head);
		head->next->prev = head;	
	}
}

void List::addToTail(int value)
{
	if (isEmpty())
	{
		head = tail = new ListNode(value, NULL, NULL);
	}
	else
	{
		tail = new ListNode(value, tail, NULL);
		tail->prev->next = tail;
	}
}

int List::removeHead()
{
	int value = head->data;
	if (head == tail)
	{
		delete tail;
		head = tail = NULL;
	}
	else
	{
		head = head->next;
		delete head->prev;
		head->prev = NULL;
	}

	return value;
}

int List::removeTail()
{
	int value = head->data;
	if (head == tail)
	{
		delete tail;
		head = tail = NULL;
	}
	else
	{
		tail = tail->prev;
		delete tail->next;
		tail->next = NULL;
	}

	return value;
}

int List::removeAt(int index) {
// TODO: implement removeAt
// remove the node at the specified index  
	if(head == NULL)
		return 0;

	// find node before one getting deleted

bool exit;
    ListNode *pPre = NULL,
         *pCur = head;
    int currentIndex = 0;

    while ( pCur ) {

        if (currentIndex == index) {
            break;
        }

        currentIndex++;
        pPre = pCur;
        pCur = pCur -> next;
    }

    if ( pCur ) {
        if ( pPre ) {
            pPre -> next = pCur -> next;
            delete pCur;
            exit = true; 
        } else {
            	head = pCur->next;
			delete pCur;
            	exit = true; 
        }
    }
    else
        exit = false; 

    return exit;	

}

bool List::remove(int value)
{	
	// TODO: implement remove
	// scans the list for the value

}

int List::at(int index)
{
	// TODO: implement at
	// returns int value contained at the node of specified index. Exit program if invalid
	int count;
	ListNode* current = head;
	
	while(current != NULL){
		//cout << "current = " << current << endl;   = 0x10724385
		
			if (count == index)
        		return(current->data);
    		count++;
    		current = current->next;
			
			cout << "current" << current << endl;
			cout << "data = " << current->data << endl;
	}
	//return count;
}

int valueOf(const ListNode* elem)
{
	// TODO: implement valueOf
	


}

const ListNode* List::getNext(const ListNode* node)
{
	// TODO: imoplement getNext
}

const ListNode* List::getPrevious(const ListNode* node)
{
	// TODO: implement getPrevious
}
