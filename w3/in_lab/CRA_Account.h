/**********************************************************
// Workshop 3: Classes and Privacy
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
**********************************************************/

#ifndef SICT_CRA_ACCOUNT_H
#define SICT_CRA_ACCOUNT_H


namespace sict {

const int max_name_length =40;
const int min_sin = 100000000;
const int max_sin = 999999999;

class CRA_Account {
	char m_fname[max_name_length+1];
	char m_gname[max_name_length+1];
	int m_sin;
public:
	void set(const char* familyName, const char* givenName, int sin);
	bool isEmpty() const;
	void display() const;
};

}


#endif // !SICT_CRA_ACCOUNT_H
