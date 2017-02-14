#include "LinkedList.h"

// Constructs the empty linked list object.
LinkedList::LinkedList()
{
	head = new Item; // Instantiate the head node
	head -> next = NULL;
	length = 0; // Set the length to zero
}

// Inserts incoming [newItem] at the end of the list
void LinkedList::insertItem( Item * newItem )
{
	if ( !head -> next )
	{
		head -> next = newItem;
		length++;
		return;
	}

	Item * p = head;
	Item * q = head;

	while (q)
	{
		p = q;
		q = p -> next;
	}
	p -> next = newItem;
	newItem -> next = NULL;
	length++;
}

// Function for removing an item from the list by item key
bool LinkedList::removeItem(string itemKey)
{
	if (!head->next) return false;
	Item * p = head;
	Item * q = head;
	while (q)
	{
		// Returns true if the operation is successful.
		if (q->key == itemKey)
		{
			p->next = q->next;
			delete q;
			length--;
			return true;
		}
		p = q;
		q = p->next;
	}
	return false;
}

// Function that searches for an item by its key
Item * LinkedList::getItem(string itemKey)
{
	Item * p = head;
	Item * q = head;
	while (q)
	{
		p = q;
		if ( ( p != head ) && ( p -> key == itemKey ) )
			return p; // Returns a reference to first match
		q = p->next;
	}
	return NULL; // Returns a NULL pointer if no match is found.
}

// Function for displaying the list
void LinkedList::printList()
{
	if ( length == 0 )
	{
		cout << "\n";
		return;
	}
	Item * p = head;
	Item * q = head;
	
	while (q)
	{
		p = q;
		if ( p != head )
		{
			// Display the key, value data of the current element
			cout << p->key << " - " << p->value;
			if (p -> next) cout << ", ";
			else cout << " ";
		}
		q = p -> next;
	}
	cout << "\n";
}

// Function for returning the length of the list.
int LinkedList::getLength()
{
	return length;
}

// De-allocate the memory used by the list on Quit
LinkedList::~LinkedList()
{
	Item * p = head;
	Item * q = head;
	while (q)
	{
		p = q;
		q = p -> next;
		if (q) delete p;
	}
}