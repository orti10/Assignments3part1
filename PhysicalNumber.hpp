#include <iostream>
#include "Unit.hpp"

class PhysicalNumber{
    private:
    Unit type;
    double val;
    
    public:
    PhysicalNumber(double num,Unit u);
    PhysicalNumber(PhysicalNumber pn);

    friend PhysicalNumber operator+(const PhysicalNumber&,const PhysicalNumber&); 
	friend PhysicalNumber operator-(const PhysicalNumber&,const PhysicalNumber&);
	PhysicalNumber& operator+=(const PhysicalNumber&);
	PhysicalNumber& operator-=(const PhysicalNumber&);
	PhysicalNumber operator+(); //אונרי
	PhysicalNumber operator-(); //אונרי

   friend bool operator> (const PhysicalNumber& ,const PhysicalNumber&);
   friend bool operator< (const PhysicalNumber& ,const PhysicalNumber&);
   friend bool operator>= (const PhysicalNumber& ,const PhysicalNumber&);
   friend bool operator<= (const PhysicalNumber& ,const PhysicalNumber&);
   friend bool operator== (const PhysicalNumber& ,const PhysicalNumber&);
   friend bool operator!= (const PhysicalNumber& ,const PhysicalNumber&);
    
    PhysicalNumber operator++();//++i
    PhysicalNumber operator++(int);//i++
    PhysicalNumber operator--();//--i
    PhysicalNumber operator--(int);//i--
    
    
    friend ostream& operator<< (ostream& os, const PhysicalNumber& c);//פלט
    friend istream& operator>> (istream& is, PhysicalNumber& c);//קלט
    
    
}