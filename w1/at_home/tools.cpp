/***********************************************************************
// OOP244 Workshop 1: Compiling modular source code
// File tools.cpp
// Version 1.0
// Date 2018/11/09
// Author       tchoutedjoum dambou serges
//id:109240176
// Description
// This provides some source code in a single file to break
// into modules and compile together
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
// Fardad
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include<iostream>
#include"tools.h"
using namespace std;



// displays the user interface menu
int menu() {
	cout << "1- Number of Samples" << endl;
	cout << "2- Sample Entry" << endl;
	cout << "3- Draw Graph" << endl;
	cout << "0- Exit" << endl;
	cout << "> ";
	return getInt(0, 3);
}

// Performs a fool-proof integer entry
int getInt(int min, int max) {
	int val;
	bool done = false;
	while (!done) {
		cin >> val;
		if (cin.fail()) {
			cin.clear();
			cout << "Invalid Integer, try again: ";
		}
		else {
			if (val < min || val > max) {
				cout << "Invalid value!" << endl << "Enter a value between " << min << " and " << max << ": ";
			}
			else {
				done = true;
			}
		}
		cin.ignore(1000, '\n');
	}
	return val;
}


	   }