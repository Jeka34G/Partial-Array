#include <iostream>
using namespace std;

int main() {
	const int SIZE = 100; // size declarator
	int array[SIZE]; // array declaration

	int numValues = 0; // The number of items stored in the array
					   // Initialized to zero because there is no values stored YET :)

	int number;

	cout << "Enter a number or -1 to quit: "; // Priming Read 
	cin >> number;

	while (number != -1 && numValues < SIZE) { // Continues looping until the user inputs -1 or the count reaches SIZE.
											   // By doing so, the user can exit early and have the array partially filled.

		array[numValues] = number; // store the current number input by the user INTO the array	at the 'numValues' position
		numValues++;			   // Incremented to track how many numbers were entered AND to move to the next position.

		cout << "Enter a number or -1 to quit: "; // Prompt the user again
		cin >> number;
	}

	cout << "The array is filled with: " << numValues << " elements\n";
	cout << "Like this: ";

	for (int counter = 0; counter <= numValues; counter++) { // This for loop can be simplified, 
															 // although it is better in terms of independence, it can be put into a function easily!
		if (counter == 0)
			cout << "{" << array[counter] << ",";
		else if (counter == numValues)
			cout << "}";
		else {
			if (counter == numValues - 1)
				cout << array[counter];
			else
				cout << array[counter] << ",";
		}
	}
	return 0;
}
