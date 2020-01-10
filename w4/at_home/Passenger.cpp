/**********************************************************
* Name:tchoutedjoum dambou serges
* Student ID:109240176
* Seneca email: stchoutatgoum@myseneca.ca
* Section:sgg
**********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include"Passenger.h"
using namespace std;

namespace sict {

	Passenger::Passenger() {
		m_pname[0] = '\0';
		m_destination[0] = '\0';
		m_month_d = 0;
		m_day_d = 0;
		m_year_d = 0;

	};
	// 2
	Passenger::Passenger(const char* name, const char* destination) {
		if (validstring(name,destination)) {
			strncpy(m_pname, name, 18);
			m_pname[18] = '\0';
			strncpy(m_destination, destination, 18);
			m_destination[18] = '\0';
			m_month_d = 10;
			m_day_d = 1;
			m_year_d = 2018;
		}
		
		else {
			*this = Passenger();
			
		}
	};
	bool Passenger::validstring(const char* name, const char* destination) {
		if (name == nullptr || destination == nullptr ||name[0] == '\0' || destination[0]=='\0') {
			return false;
		}
		else {
			return true;
		}
		
	};
	bool Passenger::validdate(int Nyear, int Nmonth, int Nday) {
		if (Nyear >= 2018 && Nyear <= 2020 && Nmonth >= 1 && Nmonth <= 12 && Nday >= 1 && Nday <= 31) {
			return true;
		}
		else
		{
			return false;
		}
	
	};
	// 5 parameter constructor 
	Passenger::Passenger(const char* name, const char* destination, int year, int month, int days) {
		
		if (validdate(year, month, days) && validstring(name, destination)) {
			strncpy(m_pname, name, 18);
			m_pname[18] = '\0';
			strncpy(m_destination, destination, 18);
			m_destination[18] = '\0';
			m_month_d = month;
			m_day_d = days;
			m_year_d = year;
		}
		else
		{
			
			*this = Passenger();
		}
	
	
	};
	const char* Passenger::name()const {
		if (!isEmpty()) {
			return m_pname;
		}
		else {
			return nullptr;
		}
		
	
	};

	bool Passenger::isEmpty()const {
		if (m_pname[0] == '\0' && m_destination[0] == '\0') {
			return true;
		}
		else
		{
			return false;
		}
	};
	bool Passenger::canTravelWith(const Passenger& pass ) const {
		bool result ;
		result = strcmp(pass.m_destination,m_destination)==0 &&
		       pass.m_day_d == m_day_d &&
			  pass.m_month_d == m_month_d &&
			pass.m_year_d == m_year_d ? true : false;
		 
		return result;

	};

	void Passenger::display()const {
		if (isEmpty()) {
			cout << "No passenger!" << endl;
		}
		else {
			cout << m_pname << " - " << m_destination << " on " << m_year_d << "/";
			cout.width(2);
			cout.fill('0');
			cout<< m_month_d << "/";
			cout.width(2);
			cout.fill('0');
			cout<< m_day_d << endl;
		}
	
	};
}