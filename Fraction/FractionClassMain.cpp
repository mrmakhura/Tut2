#include "FractionClass.h" //include definition of class Fraction

int main()
{
	//cout << "Welcome to C++";
	//cout<<"Fraction class Tutorial !" << endl; // Or you can say cout<<"Welecome to C++ ! \n" ;

	FractionClass initialize; // this var is used to get info form user

	int iFraction, iNum1, iNum2, iDeno1, iDeno2;

	initialize.displayMessage();

	iFraction = 1;
	iNum1 = 0;
	iNum2 = 0;
	iDeno1 = 0;
	iDeno2 = 0;

	initialize.numMessage(iFraction,iNum1);

	initialize.denoMessage(iFraction,iDeno1);

	FractionClass myfraction1(iNum1, iDeno1); // this var creates/stores fraction 1

	myfraction1.displayFraction();
	++iFraction;

	initialize.numMessage(iFraction, iNum2);

	initialize.denoMessage(iFraction, iDeno2);

	FractionClass myfraction2(iNum2, iDeno2);// this var creates/stores fraction 2
	
	myfraction2.displayFraction();

	FractionClass fracAns;

	fracAns = myfraction1 + myfraction2; //overloads the + operator
	fracAns.addFracs(iNum1, iDeno1, iNum2, iDeno2);

	fracAns = myfraction1 - myfraction2;
	fracAns.subtractFrac(iNum1, iDeno1, iNum2, iDeno2);

	fracAns = myfraction1*myfraction2;
	fracAns.multiFrac(iNum1, iDeno1, iNum2, iDeno2);

	fracAns = myfraction1 / myfraction2;
	fracAns.divFrac(iNum1, iDeno1, iNum2, iDeno2);



	//cout << endl;

	//myfraction.setNum(iFraction, iNum2);
	//myfraction.setDeno(iFraction, iDeno2);
	//myfraction.displayFraction();

	//myfraction.addFracs(iNum1, iDeno1, iNum2, iDeno2);
	//myfraction.subtractFrac(iNum1, iDeno1, iNum2, iDeno2);
	//myfraction.multiFrac(iNum1, iDeno1, iNum2, iDeno2);
	//myfraction.divFrac(iNum1, iDeno1, iNum2, iDeno2);


	system("pause");

	return 0; // indicate that program ended successfully 


}