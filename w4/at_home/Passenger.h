/**********************************************************
* Name:tchoutedjoum dambou serges
* Student ID:109240176
* Seneca email: stchoutatgoum@myseneca.ca
* Section:sgg
**********************************************************/
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H

namespace sict {
	//const int size = 19;
	class Passenger {
		char m_pname[19];
		char m_destination[19];
		int m_year_d;
		int m_month_d;
		int m_day_d;
		bool validstring(const char*, const char*);
		bool validdate(int, int, int);
	public:
		Passenger();
		Passenger(const char*, const char*);
		Passenger(const char*, const char*, int, int, int);
		const char* name()const;
		bool canTravelWith(const Passenger&) const;
		bool isEmpty()const;
		void display()const;
	};

}
#endif 
