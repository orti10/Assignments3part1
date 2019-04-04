#include <iostream>
#include "Unit.h"

using namespace ariel;
using namespace std;

<<<<<<< HEAD:PhysicalNumber.h
namespace ariel {
=======
//namespace ariel {
>>>>>>> 80135b97fd0969e31ed9c2c628d44ba976eb4fe2:PhysicalNumber.hpp
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
	PhysicalNumber operator+(); // Unari
	PhysicalNumber operator-(); // Unari

    bool operator> (const PhysicalNumber&);
    bool operator< (const PhysicalNumber&);
    bool operator>= (const PhysicalNumber&);
    bool operator<= (const PhysicalNumber&);
    bool operator== (const PhysicalNumber&);
    bool operator!= (const PhysicalNumber&);
    
    PhysicalNumber operator++();//++i
    PhysicalNumber operator++(int);//i++
    PhysicalNumber operator--();//--i
    PhysicalNumber operator--(int);//i--
    
    
    friend ostream& operator<< (ostream& os, const PhysicalNumber& c);//פלט
    friend istream& operator>> (istream& is, PhysicalNumber& c);//קלט
    
    };
<<<<<<< HEAD:PhysicalNumber.h
}
=======
}//
>>>>>>> 80135b97fd0969e31ed9c2c628d44ba976eb4fe2:PhysicalNumber.hpp
