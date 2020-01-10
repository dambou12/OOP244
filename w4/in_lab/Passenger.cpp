/**********************************************************
* Name:tchoutedjoum dambou serges
* Student ID:109240176
* Seneca email: stchoutatgoum@myseneca.ca
* Section:sgg
**********************************************************/
#include<iostream>
#include<cstring>
#include"Passenger.h"

using namespace std;

namespace sict{
    
	Passenger::Passenger() {
	  m_pname[0]='\0';
	  m_destination[0] = '\0';
	
	};

	Passenger::Passenger(const char* passenger, const char* destination) {
		if (passenger == nullptr || destination == nullptr) {
			m_pname[0] = '\0';
			m_destination[0] = '\0';
		}else {
		strncpy(m_pname, passenger, 18);
		m_pname[18] = '\0';
		strncpy(m_destination, destination, 18);
		m_destination[18] = '\0';
		}
	};
   
	bool Passenger::isEmpty()const {
		if (m_pname[0] == '\0' || m_destination[0] == '\0') {
			return true;
		}
		else
		{
			return false;
		}
	};
   
	void Passenger::display()const {
		if (isEmpty()) {
			cout << "No passenger!" << endl;
		}
		else {
			cout << m_pname <<" - "<< m_destination << endl;
		}
	};
}