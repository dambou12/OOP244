/**********************************************************
 * Name:tchoutedjoum dambou serges
 * Student ID:109240176
 * Seneca email:stchoutatgoum@myseneca.ca
 * Section: sgg
 **********************************************************/
#include <iostream>
#include "Fraction.h"

// TODO: continue the namespace
namespace sict {
	// TODO: implement the default constructor
	Fraction::Fraction() {

		a_numerator = -1;
		a_denominator = 0;

	}
	// TODO: implement the two-argument constructor
	Fraction::Fraction(int numerator, int denominator) {

		if (numerator > 0 && denominator > 0) {
			a_numerator = numerator;
			a_denominator = denominator;
			reduce();
		}
		else {
			a_numerator = -1;
			a_denominator = 0;
		}


	};
	// TODO: implement the max query
	int Fraction::max() const {
		return(a_numerator >= a_denominator) ? a_numerator : a_denominator;



	}
	// TODO: implement the min query
	int Fraction::min() const {
		return(a_numerator >= a_denominator) ? a_denominator : a_numerator;
	};
	// gcd returns the greatest common divisor of num and denom
	//
	int Fraction::gcd() const {
		int mn = min();  // min of numerator and denominator
		int mx = max();  // max of numerator and denominator
		int g_c_d = 1;
		bool found = false;

		for (int x = mn; !found && x > 0; --x) { // from mn decrement until divisor found
			if (mx % x == 0 && mn % x == 0) {
				found = true;
				g_c_d = x;
			}
		}
		return g_c_d;
	}

	// TODO: implement the reduce modifier
	void Fraction::reduce() {

		int ram = gcd();
		a_numerator /= ram;
		a_denominator /= ram;


	};
	// TODO: implement the display query
	void Fraction::display()const {
		if (a_numerator != 0 && a_denominator == 1) {
			cout << a_numerator;
		}
		else if (a_numerator != 0 && a_denominator > 1) {

			cout << a_numerator << "/" << a_denominator;
		}
		else if (a_numerator != 0 && a_denominator == 0)
			cout << "no fraction stored";
	};
	// TODO: implement the isEmpty query
	bool Fraction::isEmpty()const {
		if (a_numerator == -1 || a_denominator == 0) {
			return true;
		}
		else {
			return false;
		}

	};
	// TODO: implement the + operator

	Fraction Fraction::operator+(const Fraction& rhs) const {

		Fraction result;
		if (a_numerator > 0 && a_denominator > 0 && rhs.a_numerator > 0 && rhs.a_numerator >0) {

			result.a_numerator = (a_numerator*rhs.a_denominator) + (rhs.a_numerator*a_denominator);
			result.a_denominator = (a_denominator*rhs.a_denominator);
		}

		return result;
	}

	Fraction Fraction::operator*(const Fraction& rhs)  {
		Fraction temp;
		if (isEmpty()==false && rhs.isEmpty()== false) {
			temp.a_numerator = (a_numerator * rhs.a_numerator);
			temp.a_denominator = (a_denominator*rhs.a_denominator);
			temp.reduce();
			return temp;
		}
		else
		{
			
			return *this;
		}
	
	};
	bool Fraction::operator==(const Fraction& rhs)  {
	    
		if(isEmpty() == false && rhs.isEmpty() == false){
			if (a_numerator == rhs.a_numerator &&
				a_denominator == rhs.a_denominator) {
				
				return true;
			}
				 } 
		return false;
	};
	bool Fraction::operator!=(const Fraction& rhs)  {
		if (isEmpty() == false && rhs.isEmpty() == false) {
			if (a_numerator != rhs.a_numerator&&
				a_denominator != rhs.a_denominator) {
				return true;
			}
			
		}
	
		
		
			return false;
		
	
	};

	Fraction Fraction::operator+=(const Fraction& rhs)  {
		Fraction temp;
		if (isEmpty() == false && rhs.isEmpty() == false) {
	     
			temp.a_numerator = (a_numerator*rhs.a_denominator) + (rhs.a_numerator*a_denominator);
			temp.a_denominator = (a_denominator*rhs.a_denominator);
			temp.reduce();
			a_numerator = temp.a_numerator;
			a_denominator = temp.a_denominator;
			return *this;
		}
	
		
			
			return *this;
		
	
	
	
	};




};
