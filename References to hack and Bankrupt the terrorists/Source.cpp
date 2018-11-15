#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{
	int myScore = 150; // My score variable
	int yourScore = 1000; // Your score variable
	cout << "Original values\n";
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore); // Call badSwap function
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore); // Call goodSwap function
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n";
	system("pause"); // System pause

	return 0;
}

void badSwap(int x, int y) //Taking a copy of the data passed in.
{
	int temp = x;	// Assign X's value to temp to hold
	x = y;			// Assign Y's value to x to hold
	y = temp;		// Assign temp's value to y to hold
}

void goodSwap(int& x, int& y) //Taking a ref to the original values passed in.
{
	int temp = x;	// Assign X's value to temp to hold
	x = y;			// Assign Y's value to x to hold
	y = temp;		// Assign temp's value to y to hold
}