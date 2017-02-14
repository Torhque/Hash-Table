#include "HashTable.h"

int main()
{
	// Create 10 Items to store in the Hash Table.
	Item * person0 = new Item{ "Julio", 5554321, NULL };
	Item * person1 = new Item{ "James", 5551234, NULL };
	Item * person2 = new Item{ "John", 5558546, NULL };
	Item * person3 = new Item{ "Jane", 5551236, NULL };
	Item * person4 = new Item{ "Tim", 5551235, NULL };
	Item * person5 = new Item{ "Tina", 5551237, NULL };
	Item * person6 = new Item{ "Bob", 5551238, NULL };
	Item * person7 = new Item{ "Beth", 5551239, NULL };
	Item * person8 = new Item{ "Jenny", 8675309, NULL };
	Item * person9 = new Item{ "Jack", 5554789, NULL };

	// Create a Hash Table of 13 Linked List elements.
	HashTable table;

	// Call the insert function to add 10 Items to Hash Table.
	table.insertItem(person0);
	table.insertItem(person1);
	table.insertItem(person2);
	table.insertItem(person3);
	table.insertItem(person4);
	table.insertItem(person5);
	table.insertItem(person6);
	table.insertItem(person7);
	table.insertItem(person8);
	table.insertItem(person9);

	table.printTable(); // Print the table

	cout << "\nRetrieving name...\n\n";

	// Call the retrieve function
	Item * result = table.retrieve("Julio");

	// Output the retrieval data (key, value)
	cout << "\tName: " << result -> key << "\n\t" << "Number: " << result -> value <<  "\n" << endl;

	system("pause");
	return 0;
}