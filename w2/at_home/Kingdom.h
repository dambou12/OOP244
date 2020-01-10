/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.h
// Version 1.0
// Date 9/25/2018
// name: tchoutedjoum dambou serges 
//  id:109240176
// seneca email:stchoutatgoum@myseneca.ca
// Description
// we allocated dynamic memory for new menory
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
//
///////////////////////////////////////////////////////////
***********************************************************/

// TODO: header safeguards
#ifndef SICT_KINGDOM_H
#define SICT_KINGDOM_H



// TODO: sict namespace
namespace sict {

	struct Kingdom {
		char m_name[32];
		int m_population;
	};


	void display(const Kingdom& thing);
	void display(const Kingdom*, int);
}
#endif // DEBUG
