// CIS 22C #02Y
// Lab 3: Shows functionality of class List with 3 lists
// Name: Yusuf Quddus

/*
Program Code (Pseudocode):
	>Prints a Sorted Integer List (Ascending)
	>Deletes 5 integer values and reprints the integer list
	>Empties the List and reprints it with a count value
	>Prints a Sorted String List (Descending)
	>Deletes 2 string values and reprints the string list
	>Empties the List and reprints it with a count value
	>Prints an Unsorted Rupee List
	>Empties the List and reprints it with a count value
	>Program exits
*/


#include <iostream>
#include <string>
#include "List.h"
#include "LinkNode.h"
#include "Currency.h"
using namespace std;

void divider();

int main() {

	int data[20];
	for (int i = 0; i <= 19; i++) {
		data[i] = i;
	}

	Rupee value[20];
	for (int i = 0; i <= 19; i++) {
		value[i].setWholePart(i);
		value[i].setFractionalPart(i);
	}

	List<int> intlist(1);
	List<string> stringList("Yusuf");
	List<Rupee> rupeeList(value[3]);

	divider();

	// add integers in ascending order
	cout << "Sorted Integer List: (ASCENDING)" << endl;

	intlist.addDataSa(data[2]);
	intlist.addDataSa(data[4]);
	intlist.addDataSa(data[7]);
	intlist.addDataSa(data[7]);
	intlist.addDataSa(data[1]);
	intlist.addDataSa(data[9]);
	intlist.addDataSa(data[1]);
	intlist.addDataSa(data[10]);
	intlist.addDataSa(data[8]);
	intlist.addDataSa(data[12]);

	intlist.printData();
	cout << "Count: " << intlist.getCount() << endl << endl;

	// delete specific nodes based on data
	cout << "DELETING DATA: " << endl;
	cout << data[7] << " " << data[3] << " " << data[1] << " " << data[12] << " " << data[4] << " " << endl;
	intlist.delData(data[7]);
	intlist.delData(data[3]);
	intlist.delData(data[1]);
	intlist.delData(data[12]);
	intlist.delData(data[4]);

	// list after values deleted
	cout << "NEW Sorted Integer List: (ASCENDING)" << endl;
	intlist.printData();
	cout << "Count: " << intlist.getCount() << endl << endl;

	// empty list
	cout << "Empty List..." << endl;
	intlist.emptyList();
	intlist.printData();
	cout << "Count: " << intlist.getCount() << endl;

	divider();

	// add string to node in ascending order
	cout << "Sorted String List (Descending)" << endl;
	stringList.addDataSd("Nathan");
	stringList.addDataSd("Renan");
	stringList.addDataSd("Goel");
	stringList.addDataSd("Amber");
	stringList.addDataSd("Zili");
	stringList.addDataSd("Tyler");
	stringList.addDataSd("Maggie");
	stringList.addDataSd("Kyle");
	stringList.addDataSd("Tiffany");
	stringList.addDataSd("Owen");

	stringList.printData();
	cout << "Count: " << stringList.getCount() << endl << endl;

	cout << endl;

	// delete specific node based on data
	cout << "DELETING DATA: " << endl;
	cout << "Yusuf Tyler" << endl;
	stringList.delData("Yusuf");
	stringList.delData("Tyler");

	cout << endl << "NEW Sorted String List (Descending)" << endl;

	stringList.printData();
	cout << "Count: " << stringList.getCount() << endl << endl;

	// empty list
	cout << "Empty list..." << endl;
	stringList.emptyList();
	stringList.printData();
	cout << "Count: " << stringList.getCount() << endl << endl;

	divider();


	// add rupee to node in no order
	cout << "Unsorted Rupee List" << endl;
	rupeeList.addDataFront(value[4]);
	rupeeList.addDataFront(value[1]);
	rupeeList.addDataFront(value[3]);
	rupeeList.addDataFront(value[2]);
	rupeeList.addDataFront(value[6]);
	rupeeList.addDataFront(value[13]);
	rupeeList.addDataFront(value[9]);
	rupeeList.addDataFront(value[17]);
	rupeeList.addDataFront(value[7]);
	rupeeList.addDataFront(value[9]);

	rupeeList.printData();
	cout << "Count: " << rupeeList.getCount() << endl << endl;

	cout << endl;

	cout << endl << "NEW Unsorted Rupee List" << endl;

	rupeeList.printData();
	cout << "Count: " << rupeeList.getCount() << endl << endl;

	// empty list
	cout << "Empty list..." << endl;
	rupeeList.emptyList();
	rupeeList.printData();
	cout << "Count: " << rupeeList.getCount() << endl << endl;

	divider();



	system("pause");
	return 0;
}

/*************************************************************
divider
prints a divider
pre:
post: prints a divider
return: void
*************************************************************/
void divider()
{
	cout << "\n\n=======================================\n\n";
}