/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
// Version 1.0
// Date 9/17/2018
// Author tchoutedjoum dambou serges
//id:109240176
// Description
// the program accepts numbers of kingdom and return the first on
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
// 
///////////////////////////////////////////////////////////
***********************************************************/


// TODO: include the necessary headers
#include<iostream>
#include"Kingdom.h"
using namespace std;

// TODO: the sict namespace
namespace sict{
    // TODO:definition for display(...) 
	void display( const Kingdom& thing) {
	  
		cout << thing.m_name << ", " << "population " << thing.m_population << endl;
	
	
	};

}