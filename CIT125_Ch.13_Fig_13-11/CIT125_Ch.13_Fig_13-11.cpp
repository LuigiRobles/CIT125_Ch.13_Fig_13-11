// CIT125 Intro To C++ Luigi Robles
// 08-01-2020 Summer Term
// Ch.13 pg.472 Fig.13-11 Zip Code Program
// Checks whether a ZIP code contains valid number of characters

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare and initialize variables
	string zipCode = "";

	cout << "Five-character ZIP code (-1 to end): ";
	cin >> zipCode; //input for ZIP code
	
	while (zipCode != "-1")
	{
		if (zipCode.length() == 5) //checking ZIP code for 5 characters
			cout << "-->Correct number of characters";
		else
			cout << "-->Incorrect number of characters"; //False path for anything below 5 characters
		//end if
		cout << endl << endl;

		cout << "Five-characters ZIP code (-1 to end): ";
		cin >> zipCode; //continue with loop if -1 is not entered
	} //end while
	return 0;
} //end of main function
