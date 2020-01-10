/**********************************************************
// Workshop 3 lab3: Classes and Privacy
// CRA_Account.h
// Version 3.0
// 2018/09/24
// authortchoutedjoum dambou serges
// id:109240176
// section:sgg
// Description
// This workshop demonstrates classes in C++ and
// how member variables are defined privately, but
// accessed through public member functions
///////////////////////////////////////////////////////////
**********************************************************/

#include <iostream>
#include<cstring>
#include"CRA_Account.h"

using namespace std;
//using namespace sict;

namespace sict {
	bool CRA_Account::isValid(int sin) const {
		int sum = 0;
		int evens[4] = { (((sin / 10) % 10) * 2), (((sin / 1000) % 10) * 2), (((sin / 100000) % 10) * 2), (((sin / 10000000) % 10) * 2) };
		int odds[4] = { (((sin / 100) % 10)), (((sin / 10000) % 10)), (((sin / 1000000) % 10)), (((sin / 100000000) % 10)) };

		for (int i = 0; i < 4; i++)
		{
			sum += ((((evens[i] / 1) % 10) + ((evens[i] / 10) % 10)));
			sum += odds[i];
		}

		int upIntTen = ((sum + 9) / 10) * 10;

		if (((upIntTen - sum) == (sin / 1) % 10) && sin >= min_sin && sin <= max_sin)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	

	void CRA_Account::set(int year, double balance) {
	   
		if (isValid(m_sin) && m_year < max_yrs) {
			
			
				balanceowed[m_year] = balance;
				taxyears[m_year] = year;
				m_year++;
	    }
	
	
	
	};


	void CRA_Account::set(const char* familyName, const char* givenName, int sin) {

		if (sin>=min_sin && sin<=max_sin && isValid(sin) && familyName[0] !='\0' && givenName[0] != '\0') {

			strncpy(m_fname, familyName, max_name_length + 1);
			strncpy(m_gname, givenName, max_name_length + 1);
			m_sin = sin;
			m_year = 0;
		
		}
		else
		{
			m_fname[0] = '\0';
			m_gname[0] = '\0';
			m_sin = 0;
		}



	};

	bool CRA_Account::isEmpty() const {

		if (m_sin < min_sin || m_sin > max_sin || m_sin==0) {
			return true;
		}
		else {
			return false;
		}


	};
	void CRA_Account::display() const {

		if(!isEmpty()){

			cout << "Family Name: " << m_fname << endl;
			cout << "Given Name : " << m_gname << endl;
			cout << "CRA Account: " << m_sin << endl;

			cout.setf(ios::fixed);
			for (int i=0;i<m_year;i++){
				if (balanceowed[i] > 2) {

					cout.precision(2);
					cout << "Year (" << taxyears[i] << ") balance owing: " << balanceowed[i] << endl;

				}
				else if (balanceowed[i] < -2)
				{
					cout.precision(2);
					cout << "Year (" << taxyears[i] << ") refund due: " << balanceowed[i]*-1 << endl;
				}
				else {
					cout << "Year ("<<taxyears[i] << ") No balance owing or refund due!" << endl;
				}
			}
			
				cout.unsetf(ios::fixed);
		}else {

			cout << "Account object is empty!" << endl;
		}
	};

};


