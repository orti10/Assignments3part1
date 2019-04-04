#include "PhysicalNumber.h"
#include <iostream>
#include<exception>
#include <math.h> 
using namespace std;
    
    PhysicalNumber::PhysicalNumber(double num,Unit u){
         this->num=num;
         this->u=u;
     }
    PhysicalNumber::PhysicalNumber(PhysicalNumber& pn){
        *this.num=pn.num;
        *this.u=pn.u;
    }

    PhysicalNumber operator+(const PhysicalNumber& p1,const PhysicalNumber& p2){
         return PhysicalNumber(0.0, Unit::KM);
    }
    
	PhysicalNumber operator-(const PhysicalNumber& p1,const PhysicalNumber& p2){
	      return PhysicalNumber(0.0, p1.u);
	}
	PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber&){
	    return PhysicalNumber(0.0,u);
	}
	PhysicalNumber& PhysicalNumber::operator-=(const PhysicalNumber&){
	    return PhysicalNumber(0.0,u);
	}

    bool PhysicalNumber::operator> (const PhysicalNumber& other){
        return false;
    }
    bool PhysicalNumber::operator< (const PhysicalNumber& other){
        return false;
    }
    bool PhysicalNumber::operator>= (const PhysicalNumber& other){
        return false;
    }
    bool PhysicalNumber::operator<= (const PhysicalNumber& other){
        return false;
    }
    bool PhysicalNumber::operator== (const PhysicalNumber& other){
        return false;
    }
    bool PhysicalNumber::operator!= (const PhysicalNumber& other){
        return false;
    }
    
    PhysicalNumber PhysicalNumber::operator++(){//++i קודם מקדם ואז מדפיס
        //++*this.num; //יותר יעיל
        //return PhysicalNumber(*this.num,*this.u);
	return *this;
    }
    PhysicalNumber PhysicalNumber::operator++(int){//i++
        PhysicalNumber pn(*this);
        //++*this.num;
        //return PhysicalNumber(pn.num,pn.u);//קודם מדפיס ואז מקדם את הערך
    	 return *this;
    }
    PhysicalNumber PhysicalNumber::operator--(){//--i
     //return PhysicalNumber(*this.num-1,*this.u);
    return *this;
    }
    PhysicalNumber PhysicalNumber::operator--(int){//i--
     return *this;
    }
    
    ostream& ariel::operator<< (ostream& os, const PhysicalNumber& pn){//פלט
<<<<<<< HEAD
    
    return os ;

    }
    istream& ariel::operator>> (istream& is, PhysicalNumber& pn){//קלט
    
=======
       string str;
    switch (pn.unit) {
        case Unit::KM :
            str = "km";
            break;
        case Unit::M :
            str = "m";
            break;
        case Unit::CM :
            str = "cm";
            break;
        case Unit::HOUR :
            str = "hour";
            break;
        case Unit::MIN :
            str = "min";
            break;
        case Unit::SEC :
            str = "sec";
            break;
        case Unit::TON :
            str = "ton";
            break;
        case Unit::KG :
            str = "kg";
            break;
        case Unit::G :
            str = "g";
            break;
    }
    return os << pn.data << "[" << str << "]";
}
    }
    istream& ariel::operator>> (istream& is, PhysicalNumber& pn){//קלט
    
     is >> pn.data;
>>>>>>> 80135b97fd0969e31ed9c2c628d44ba976eb4fe2
    return is;
    }
