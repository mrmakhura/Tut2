#include <iostream>
#include <iomanip>
#include <string>
#include "FractionClass.h"
using namespace std;

FractionClass::FractionClass( int x , int y )//calls member function setNum/setDeno to set variables; default are 0 (see class definition)
{
	setNum(x);
	setDeno(y);
}

FractionClass::~FractionClass()
{}

	int FractionClass::getDeno()
	{
		return ideno;
	}

	int FractionClass::getNumer()
	{
		return inumer;
	}

	void FractionClass::numMessage(int &i)//
	{
		cout << "Please enter the numerator for fraction [" << i << "] :";
		//cin >> o;
	}

	void FractionClass::denoMessage(int &i)//
	{
		cout << "Please enter the denomenator for fraction [" << i << "] :";
		//cin >> o;
	}

	void FractionClass::displayMessage()//
	{
		cout << "Welcome to My first Serious C++ Fraction Tut" <<endl<< endl;
	}//end ths function

	void FractionClass::setDeno( int &y) // we put the ampersand &  so that we can pass variable x and y by reference 
	{
		ideno = y;
	}

	void FractionClass::setNum(int &x)//
	{
		inumer = x;
	
	}

	void FractionClass::doWorkings(int x, int y, int  &c, int &n, int &d)
	{
		c = x / y;
		n = x%y;
		d = y;
	}

	void FractionClass::displayFraction()//
	{
		
	}//

	void FractionClass::addFracs(int &x1, int &y1, int &x2, int &y2)///
	{
		cout << "\n ***** ADDITION OF THE 2 FRACTIONS *****" << endl;
		cout << "(" << x1 << "/" << y1 << ") + " << "(" << x2 << "/" << y2 << ")  = ..." << endl;
	}

	void FractionClass::subtractFrac(int &x1, int &y1, int &x2, int &y2)
	{
		
		cout << "\n ***** SUBTRACTION OF THE 2 FRACTIONS *****" << endl;
		cout << "(" << x1 << "/" << y1 << ") - " << "(" << x2 << "/" << y2 << ")  = ..." << endl;

	}

	void FractionClass::multiFrac(int &x1, int &y1, int &x2, int &y2)
	{

		cout << "\n ***** MULTIPLICATION OF THE 2 FRACTIONS *****" << endl;
		cout << "(" << x1 << "/" << y1 << ") * " << "(" << x2 << "/" << y2 << ")  = ..." << endl;

	}

	void FractionClass::divFrac(int &x1, int &y1, int &x2, int &y2)
	{

		cout << "\n ***** DIVISION OF THE 2 FRACTIONS *****" << endl;
		cout << "(" << x1 << "/" << y1 << ") / " << "(" << x2 << "/" << y2 << ")  = ..." << endl;

	}

	FractionClass FractionClass::operator+( const FractionClass &Frac2 )
	{
		FractionClass Add;

	Add.inumer = Frac2.ideno*(this->inumer) + (this->ideno)*Frac2.inumer;
	Add.ideno = Frac2.ideno*(this->ideno);

	return Add;
	
	}

	FractionClass FractionClass::operator-(const FractionClass &Frac2)
	{
		FractionClass Subtract;
	
		Subtract.inumer = Frac2.ideno*(this->inumer) - Frac2.inumer*(this->ideno);
		Subtract.ideno = Frac2.ideno*(this->ideno);

		return Subtract;
	}

	FractionClass FractionClass::operator*(const FractionClass &Frac2)
	{
		FractionClass Multiply;
		
		Multiply.inumer = Frac2.inumer*(this->inumer);
		Multiply.ideno = Frac2.ideno*(this->ideno);

		return Multiply;
	}

	FractionClass FractionClass::operator/(const FractionClass &Frac2)
	{
		FractionClass Divide;
		Divide.inumer = Frac2.ideno*(this->inumer);
		Divide.ideno = Frac2.inumer*(this->ideno);

		return Divide;
	}

	void FractionClass::incCounter()
	{
		++iCount;
	}
	
	ostream &operator<<(ostream& os, FractionClass& v)
	{
		int iCoef, iNum, iDeno;

		iCoef = 0;
		iNum = 0;
		iDeno = 0;


		if (v.inumer> v.ideno)
		{

			v.doWorkings(v.inumer, v.ideno, iCoef, iNum, iDeno);


			os << "The fraction  is an Improper Fraction : " << v.inumer << "/" << v.ideno << endl;

			if (iNum <= 0)
			{
				os << "Therefore this fraction can be writen in its Proper Fraction : " << iCoef << endl << endl;
			}
			else
			{
				os << "Therefore this fraction can be writen in its Proper Fraction : " << iCoef << "  " << iNum << "/" << iDeno << " " << endl << endl;
			}
		}
		else
		{
			os << "The fraction  is a Proper Fraction : " << v.inumer << "/" << v.ideno << endl << endl;
		}

		return os;
	}

	istream &operator>>(istream& is, FractionClass& v)
	{
		
		++v.iCount;
		v.numMessage(v.iCount);
		is >> v.inumer;
		v.denoMessage(v.iCount);
		is >> v.ideno;
		return is;
	}
