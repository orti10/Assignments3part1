#include <iostream>
#include "Unit.h"

using namespace ariel;
using namespace std;

//namespace ariel {
class PhysicalNumber{
    private:
    Unit u;
    double num;
    
    public:
    PhysicalNumber(double num,Unit u);
    PhysicalNumber(PhysicalNumber& pn);

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
    
    };
}//
