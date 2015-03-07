#include <iostream>
#include <string>
using namespace std;

class Fraction
{
public: //public accesor , this enables me to show
	//the function and methods i declare in the class to any one in this cpp file

	void displayMessage()
	{
		cout << "Welcome to My first Serious C++ Fraction Tut" << endl;
	}//end ths function

	void setDeno(int &x, int &y) // we put the ampersand &  so that we can pass variable x and y by reference 
	{
		cout << "\n Please enter the denominator for fraction " << x << " :";
		cin >> y;
		cout << endl;

	}

	void setNum(int &x, int &y)
	{
		cout << "\n Please enter the numerator for fraction " << x << " :";
		cin >> y;
		cout << endl;
	}

	void doWorkings(int x, int y, int  &c, int &n, int &d)
	{
		c = x / y;
		n = x%y;
		d = y;
	}

	void displayFraction(int &x, int &y)
	{
		int iCoef, iNum, iDeno;

		iCoef = 0;
		iNum = 0;
		iDeno = 0;


		if (x > y)
		{

			doWorkings(x, y, iCoef, iNum, iDeno);

			cout << "The farction  is an Improper Fraction : " << x << "/" << y << endl;

			if (iNum <= 0)
			{
				cout << "Therefore this fraction can be writen in its Proper Fraction : " << iCoef << endl;
			}
			else
			{
				cout << "Therefore this fraction can be writen in its Proper Fraction : " << iCoef << "*( " << iNum << "/" << iDeno << ")" << endl;
			}
		}
		else
		{
			cout << "The fraction  is a Proper Fraction : " << x << "/" << y << endl;
		}

	}

	void addFracs(int &x1, int &y1, int &x2, int &y2)
	{
		int iNum, iDeno;

		iNum = y2*x1 + y1*x2;
		iDeno = y2*y1;
		cout << "\n ***** ADDITION OF THE 2 FRACTIONS *****" << endl;
		cout << "(" << x1 << "/" << y1 << ") +" << "(" << x2 << "/" << y2 << ")  = ..." << endl;
		displayFraction(iNum, iDeno);

	}

	void subtractFrac(int &x1, int &y1, int &x2, int &y2)
	{
		int iNum, iDeno;

		iNum = y2*x1 - y1*x2;
		iDeno = y2*y1;
		cout << "\n ***** SUBTRACTION OF THE 2 FRACTIONS *****" << endl;
		cout << "(" << x1 << "/" << y1 << ") -" << "(" << x2 << "/" << y2 << ")  = ..." << endl;
		displayFraction(iNum, iDeno);

	}

	void multiFrac(int &x1, int &y1, int &x2, int &y2)
	{
		int iNum, iDeno;

		iNum = x1*x2;
		iDeno = y2*y1;
		cout << "\n ***** MULTIPLICATION OF THE 2 FRACTIONS *****" << endl;
		cout << "(" << x1 << "/" << y1 << ") +" << "(" << x2 << "/" << y2 << ")  = ..." << endl;
		displayFraction(iNum, iDeno);

	}

	void divFrac(int &x1, int &y1, int &x2, int &y2)
	{
		int iNum, iDeno;

		iNum = x1*y2;
		iDeno = y1*x2;
		cout << "\n ***** DIVISION OF THE 2 FRACTIONS *****" << endl;
		cout << "(" << x1 << "/" << y1 << ") +" << "(" << x2 << "/" << y2 << ")  = ..." << endl;
		displayFraction(iNum, iDeno);

	}


}; //ends the class
