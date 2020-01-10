/**********************************************************
// Workshop 3: Classes and Privacy
// w3_in_lab.cpp
// Version 3.0
// 2018/09/23
// Chris Szalwinski
// Description
// This workshop demonstrates classes in C++ and
// how member variables are defined privately, but
// accessed through public member functions
//
// Revision History
///////////////////////////////////////////////////////////
// Name			Date		                         Reason
// Chris        2018/01/23            allow longer names
///////////////////////////////////////////////////////////
**********************************************************/

#ifndef SICT_CRA_ACCOUNT_H
#define SICT_CRA_ACCOUNT_H


namespace sict {

	const int max_name_length = 40;
	const int min_sin = 100000000;
	const int max_sin = 999999999;
	const int max_yrs = 4;
	class CRA_Account {
		char m_fname[max_name_length + 1];
		char m_gname[max_name_length + 1];
		int m_sin;
		double balanceowed[max_yrs];
		int taxyears[max_yrs];
		int m_year;
	public:
		void set(int year, double balance);
		void set(const char* familyName, const char* givenName, int sin);
		bool isEmpty() const;
		void display() const;
		bool isValid(int sin) const;
	};

}


#endif // !SICT_CRA_ACCOUNT_H

