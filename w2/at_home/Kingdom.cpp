/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
// Version 1.0
// Date 9/25/2018
// name: tchoutedjoum dambou serges
//  id:109240176
// seneca email:stchoutatgoum@myseneca.ca
// Description
//we allocated dynamic memory for new menory
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
//
///////////////////////////////////////////////////////////
***********************************************************/



#include<iostream>
#include"Kingdom.h"
using namespace std;


namespace sict {

	void display(const Kingdom& thing) {
//                cout<<  "Kingdom #3:"<< endl;
		cout << thing.m_name << "," << " population " << thing.m_population << endl;
//   cout<<  "=========="<< endl;

	};
	void display(const Kingdom* pKingdom, int numberking ){
		int totalnumberking = 0,i;
		cout << "------------------------------" << endl;
		cout << "Kingdoms of SICT" << endl;
		cout << "------------------------------" << endl;
		for (i = 0; i < numberking; i++) {
			cout << i + 1 << ". ";
			sict::display(pKingdom[i]);
			totalnumberking += pKingdom[i].m_population;
		}
		cout << "------------------------------" << endl;
		cout << "Total population of SICT: " << totalnumberking << endl;
		cout << "------------------------------" << endl;
		
		


	};


}
