/**********************************************************
// Workshop 3 lab3: Classes and Privacy
// CRA_Account.h
// Version 3.0
// 2018/09/26
// author: tchoutedjoum dambou serges
// Student ID:109240176
// seneca email:stchoutatgoum@myseneca.ca
// section:sgg
// Description
// This workshop demonstrates classes in C++ and
// how member variables are defined privately, but
// accessed through public member functions
///////////////////////////////////////////////////////////
**********************************************************/

#include <iostream>
#include<cstring>
#include<string.h>
#include"CRA_Account.h"

using namespace std;
//using namespace sict;

namespace sict {

	void CRA_Account::set(const char* familyName, const char* givenName, int sin) {
		
		if (sin > min_sin && sin<max_sin ) {
	 
			strncpy(m_fname, familyName, max_name_length +1);
			strncpy(m_gname, givenName, max_name_length +1);
			m_sin = sin;
		}
		else
		{
			m_sin = 0;
		}
	
	
	
	};

	bool CRA_Account::isEmpty() const {
	  
		if (m_sin == 0 ) {
			return true;
		}
		else {
			return false;
		}
	
	
	};
	void CRA_Account::display() const {
	  
		if (!isEmpty()) {

			cout << "Family Name: " << m_fname << endl;
			cout << "Given Name : " << m_gname << endl;
			cout << "CRA Account: " << m_sin << endl;
		}
		else
		{
			cout << "Account object is empty!<" << endl;
		}
	};

};


