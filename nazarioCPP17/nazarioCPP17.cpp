// Nazario, Xavier
// June 27, 2025 ©
// Chapter 7 Programming Assignment
// References:
// Starting out with C++: from Control
//	Structures to Objects (10th edition) by Tony Gaddis
// Youtube Channel: Tech With Tim, videos: Learn C++ With Me #9 - Arrays and Learn C++ With Me #18 - Vectors
//	https://www.youtube.com/watch?v=1FVBeLD_FdE - Arrays
//	https://www.youtube.com/watch?v=RXzzE2wnnlo&list=PLzMcBGfZo4-lmGC8VW0iu6qfMHjy7gLQ3&index=18 - Vectors
// https://cplusplus.com/doc/tutorial/arrays/
// https://cplusplus.com/reference/cstdlib/rand/
// https://cplusplus.com/reference/cstring/strcpy/

//							******TAKE ASSIGNMENT STEP BY STEP AND TEST OUTPUT OVER AND OVER******

#include <iomanip>
#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <time.h>
using namespace std;

// Main function starts here
int main() {

	// Step 1: Create 4 arrays dArr, lArr, iArr, sName
	//	Refer to assignment page
	double dArr[5];
	long lArr[7] = { 100000, 134567, 123456, 9, -234567, -1, 123489 };
	int iArr[3][5];
	char sName[30] = { 'X', 'A', 'V', 'I', 'E', 'R', 'N', 'A', 'Z', 'A', 'R', 'I', 'O' };

	// Step 2: Create 3 Variables cnt1, cnt2, total
	//	cnt1 and cnt2 short data, total long double data
	short cnt1;	// Holds counter 1 for steps 4 - 8
	short cnt2; // Holds counter 2 for steps 9 - 12
	long double total = 0;	// Initialize to 0, green error lines

	// Step 3: Create highest variable
	//	long data
	long highest; // Holds highest number for steps 9/10

	// Step 4: Use For loop to put random numbers in array dArr
	// Step 5: Create rand() and seed starting point with srand()
	//		***Textbook page 130*** for rand()/srand()
	srand((unsigned)time(NULL)); // srand() seed

	// For loop
	for (cnt1 = 0; cnt1 < 5; cnt1++) {
		dArr[cnt1] = rand();
	}

	// Step 6: Display contents of array dArr
	//	Use For loop
	cout << "The contents of array dArr are:" << endl;
	for (cnt1 = 0; cnt1 < 5; cnt1++) {
		cout << dArr[cnt1] << ", ";
	}

	// Step 7: Add up array dArr
	//	Use For loop
	//	dArr elemnts add into total variable
	for (cnt1 = 0; cnt1 < 5; cnt1++) {
		total += dArr[cnt1];
	}

	cout << endl; // Breaking up the output for next step

	// Step 8: Display total and average of array dArr
	//	One cout statement per
	double average = total / 5;
	cout << total << " is the total of dArr." << endl;
	cout << average << " is the average of dArr." << endl;

	// Step 9: Create For loop for array, lArr
	//	For loop MUST be similar to one on assign. page
	//	USE highest variable here for STEP 10
	highest = lArr[0]; // Would highest go here instad of loop??? keep getting exceptions
	for (cnt2 = 1; cnt2 < 7; cnt2++) {
		if (lArr[cnt2] > highest) { // No exception in this format
			highest = lArr[cnt2];
		}
	}

	cout << endl; // Breaking up the output for the next step

	// Step 10: Display highest variable from step 9
	//	One cout statement
	cout << highest << " is the highest value in array lArr." << endl;

	cout << endl; // Breaking up output for next steps

	// Step 11: Create For loop to put random numbers, each value >= 1 AND values <= 53, into array iArr
	//	***Seed the random generator with srand( (unsigned) time(NULL)). Only have to run srand once.***
	// Use the modulo operator (%)
	srand((unsigned)time(NULL)); // srand() seed

	// iArr has 3 row, 5 column
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 5; col++) {
			iArr[row][col] = rand() % 53 + 1; // Numbers 1 to 53
		}
	}

	// Step 12: Display array iArr by rows == 3, each row has 5 numbers
	//	Use For loop, setw()
	cout << "Array iArry displayed by row:" << endl;

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 5; col++) {
			cout << setw(5) << iArr[row][col];
		}
		cout << endl;
	}

	cout << endl; // Breaking up output for next step

	// Step 13: Display 2D array iArr by column
	//	Use For loop, NEED setw() for clean output
	cout << "Two dimensional array iArr displayed by column:" << endl;

	for (int col = 0; col < 5; col++) {
		for (int row = 0; row < 3; row++) {
			cout << setw(5) << iArr[row][col];
		}
		cout << endl;
	}

	cout << endl; // Breaking up output for next step

	// Step 14: Get another name to pass to array sName
	//	Use cin.getline()
	cout << "Please enter your name. Maximum of thirty (30) characters." << endl;
	cin.getline(sName, 30);

	cout << endl; // Breaking up output for next step

	// Step 15: Display ASCII value of each character in sName
	//	Use while loop, look for '\0' to signal end, refer to canvas code
	cout << "ASCII values of each character in array sName:" << endl;
	
	// Use c for variable
	int c = 0;
	while (sName[c] != '\0') {
		cout << static_cast<int>(sName[c]) << ", ";
		c++; // Need for no infinite loop
	}

	cout << endl; // Breaking up output for next step

	// Step 16: Add name Albert Einstein to array sName
	//	MUST use strcpy_s function, textbook page 578 Chapter 10.4 Library Functions for Working with C-Strings
	strcpy_s(sName, sizeof(sName), "Albert Einstein");

	cout << endl; // Breaking up output for next step

	// Step 17: Display ASCII value of the 12th character of string sName
	cout << "The 12th character of string sName is: ";
	cout << static_cast<int>(sName[11]);
	
	return 0;
}