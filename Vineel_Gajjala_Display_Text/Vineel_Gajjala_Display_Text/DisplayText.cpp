/*
Vineel Gajjala- 9/21/2017 3rd
Assignment Name: Display Text
Intro to C++ Visual Studios 2015 Creating New Project
Displaying Text to Console from Code
*/
//Libraries
#include <iostream> //end1 << >> cin cout
#include <conio.h> // _kbhit() and _getch() for the pause() function

//Namespaces
using namespace std;

//Functions
void pause() {
	cout << "Press Any Key to Continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}
//MAIN
void main() {
	int p;
	p = 3;
	//Define and Assign your varable(s)
	//Display Text
	cout << "Hello World!" << endl;
	cout << "Vineel Gajjala" << endl;
	cout << "Period" << p << endl; 
	pause(); //pauses to see the displayed text
}