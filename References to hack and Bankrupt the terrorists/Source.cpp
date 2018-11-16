#include <iostream>

using namespace std;

void badSwap(int x, int y); // Function bad swap declared with x and y integers 
void goodSwap(int& x, int& y); // Function good swap declared with x and y integers 

int main()
{
	cout << "Our CIA's best coffee shop Joe's isn't doing very well... :(\n";
	system("pause"); // System pause
	system("cls"); // System clear
	cout << "We at the CIA wont let Joe's coffee shop go down!\n";
	system("pause"); // System pause
	system("cls"); // System clear
	cout << "We have been tracking cryptocurrency transactions being conducted by a group of terrorists!\n";
	system("pause"); // System pause
	system("cls"); // System clear
	cout << "We think it's time these terrorist do something good with their money!\n";
	system("pause"); // System pause
	system("cls"); // System clear
	cout << "Lets swap the funds of these terrorists to Joe's!\n";
	system("pause"); // System pause
	system("cls"); // System clear

	int joes_funds = 0; // Joe's funds variable
	int terrorists_funds = 100000; // Terrorists funds
	cout << "Original account funds... \n";
	cout << "Joe's funds " << joes_funds << "\n";
	cout << "Terrorists funds " << terrorists_funds;
	cout << "\n";
	system("pause"); // System pause
	system("cls"); // System clear

	cout << "Swapping funds from terrorists to Joe's funds... \n";
	badSwap(joes_funds, terrorists_funds); // Call badSwap function
	cout << "Joe's funds currently " << joes_funds << "\n";
	cout << "Terrorists funds currently " << terrorists_funds << "\n";
	cout << "Swapping in progress...";
	system("timeout /t 10 /nobreak"); // System timeout for 10 seconds
	system("cls"); // System clear

	cout << "Funds swapped from the terrorists funds to Joe's...\n";
	goodSwap(joes_funds, terrorists_funds); // Call goodSwap function
	cout << "Joe's funds " << joes_funds << "\n";
	cout << "Terrorists funds " << terrorists_funds << "\n";
	system("pause"); // System pause
	system("cls"); // System clear

	cout << "Good job agent we've saved Joe's Coffee and taken funds away from terrorists!\n";
	system("pause"); // System pause
	system("cls"); // System clear
	cout << "It's all in a days work here at the CIA!\n";
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