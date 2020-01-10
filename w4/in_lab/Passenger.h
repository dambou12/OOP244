







/**********************************************************
* Name:tchoutedjoum dambou serges
* Student ID:109240176
* Seneca email: stchoutatgoum@myseneca.ca
* Section:sgg
**********************************************************/
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H

namespace sict{
	//const int size = 19;
	class Passenger {
		char m_pname[19];
		char m_destination[19];
	public:
		Passenger();
		Passenger(const char*, const char*);
		bool isEmpty()const;
		void display()const;
   };
    
}
#endif 