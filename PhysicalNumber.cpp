#include "PhysicalNumber.hpp"
#include <iostream>
#include<exception>
#include <math.h> 
using namespace std;
    
    PhysicalNumber::PhysicalNumber(double num,Unit u){
         *this.num=num;
         *this.u=u;
     }
    PhysicalNumber::PhysicalNumber(PhysicalNumber pn){
        *this.num=pn.num;
        *this.u=pn.u;
    }

    PhysicalNumber operator+(const PhysicalNumber& p1,const PhysicalNumber& p2){
        return *this;
    }
    
	PhysicalNumber operator-(const PhysicalNumber& p1,const PhysicalNumber& p2){
	     return *this;
	}
	PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber&){
	    return *this;
	}
	PhysicalNumber& PhysicalNumber::operator-=(const PhysicalNumber&){
	    return *this;
	}

    bool operator> (const PhysicalNumber& p1,const PhysicalNumber& p2){
        return false;
    }
    bool operator< (PhysicalNumber& other){
        return false;
    }
    bool operator>= (PhysicalNumber& other){
        return false;
    }
    bool operator<= (PhysicalNumber& other){
        return false;
    }
    bool operator== (PhysicalNumber& other){
        return false;
    }
    bool operator!= (PhysicalNumber& other){
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
    
    ostream& operator<< (ostream& os, const PhysicalNumber& c){//פלט
        return os<<c.num<<" "<<c.u;//check 
    }
    istream& operator>> (istream& is, PhysicalNumber& c){//קלט
    
        double val;
        Unit u;
    }