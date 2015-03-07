#include <iostream> // allows program to output data to screen
#include "FractionClass.h" //include definition of class Fraction
using namespace std;

int main()
{
	//cout << "Welcome to C++";
	//cout<<"Fraction class Tutorial !" << endl; // Or you can say cout<<"Welecome to C++ ! \n" ;

	Fraction myfraction;
	int iFraction, iNum1, iNum2, iDeno1, iDeno2;
	myfraction.displayMessage();
	iFraction = 1;
	iNum1 = 0;
	iNum2 = 0;
	iDeno1 = 0;
	iDeno2 = 0;


	myfraction.setNum(iFraction, iNum1);
	myfraction.setDeno(iFraction, iDeno1);
	myfraction.displayFraction(iNum1, iDeno1);
	iFraction = iFraction + 1;
	cout << endl;

	myfraction.setNum(iFraction, iNum2);
	myfraction.setDeno(iFraction, iDeno2);
	myfraction.displayFraction(iNum2, iDeno2);

	myfraction.addFracs(iNum1, iDeno1, iNum2, iDeno2);
	myfraction.subtractFrac(iNum1, iDeno1, iNum2, iDeno2);
	myfraction.multiFrac(iNum1, iDeno1, iNum2, iDeno2);
	myfraction.divFrac(iNum1, iDeno1, iNum2, iDeno2);


	system("pause");

	return 0; // indicate that program ended successfully 


}