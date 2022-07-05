#include "header.h"

int main()
{
	struct ARRAY arr;

	//array size
	cout << "ENTER SIZE OF ARRAY";
again_arrsize:
	cin >> arr.size;
	if (arr.size < 0)
	{
		cout << "cannot be negative size, please enter again";
		goto again_arrsize;
	}

	//creating array in heap
	arr.A = new int[arr.size];

	//initializing length
	arr.length = 0; //no element in array

	//taking input
	cout << "enter no. of elements:\n";
again_arrlength:
	cin >> arr.length;
	if (arr.length > arr.size)
	{
		cout << "length is greater than size, please enter again";
		goto again_arrlength;
	}

	//input array
	input(&arr);
	char choice = '\0';

	//menu driven
	cout << "\n\nWELCOME TO MENU DRIVEN PROGRAM:\n\n";

	do
	{
		//commands
		cout << "1: for displaying array.\n";
		cout << "2: for adding element at last point.\n";
		cout << "3: for inserting element at particular place\n";
		cout << "4:for deleting element at particular place\n";
		cout << "5: linear search of particular element.\n";
		cout << "6: for setting value at particular place\n";
		cout << "7:find max and min\n";
		cout << "8:average\n";
		cout << "9:reverse\n";
		cout << "a : for binary search\n";
		cout << "e :for exit:\n";
		cin >> choice;

		switch (choice)
		{
		case '1':
			display(&arr);
			break;

		case '2':
			add(&arr);
			break;

		case '3':
			insert(&arr);
			break;

		case '4':
			del(&arr);
			break;

		case '5':
			linear_search(&arr);
			break;

		case '6':
			set(&arr);
			break;
		case '7':
			max_min(&arr);
			break;
		case '8':
			avg(&arr);
			break;

		case '9':
			reverse(&arr);
			break;

		case 'a':
			binary_search(&arr);
			break;
		case 'e':
			choice = 'e';
			break;

		default:
			cout << "\n\nPLEASE ENTER VALUES CAREFULLY!!!!!";
			break;
		}
	} while (choice != 'e');

	return 0;
}