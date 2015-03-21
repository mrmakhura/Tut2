#include <iostream>
#include "FractionClass.h" //include definition of class Fraction
using namespace std;

int main()
{
	//cout << "Welcome to C++";
	//cout<<"Fraction class Tutorial !" << endl; // Or you can say cout<<"Welecome to C++ ! \n" ;
	
	int iNum1, iDeno1, iNum2, iDeno2;

	FractionClass myfraction1; // this var is used to get info form user

	myfraction1.displayMessage();

	cin >> myfraction1;
	cout << myfraction1;

	iNum1 = myfraction1.getNumer();
	iDeno1 = myfraction1.getDeno();


	FractionClass myfraction2;

	myfraction2.incCounter(); // increase counter

	cin >> myfraction2; // get inputs from user - extraction overload
	cout << myfraction2;// show results to user - insertion overload

	iNum2 = myfraction2.getNumer(); //get private numerator value
	iDeno2 = myfraction2.getDeno();	//get private denominator value

	FractionClass fracAns;

	fracAns = myfraction1 + myfraction2;//overloads the + operator
	fracAns.addFracs(iNum1, iDeno1, iNum2, iDeno2); // this function shows <1/2> + <2/3> = ...
	cout << fracAns;

	fracAns = myfraction1 - myfraction2;
	fracAns.subtractFrac(iNum1, iDeno1, iNum2, iDeno2);// this function shows <1/2> - <2/3> = ...
	cout << fracAns;// show results to user - insertion overload

	fracAns = myfraction1*myfraction2;
	fracAns.multiFrac(iNum1, iDeno1, iNum2, iDeno2);// this function shows <1/2> * <2/3> = ...
	cout << fracAns;

	fracAns = myfraction1 / myfraction2;
	fracAns.divFrac(iNum1, iDeno1, iNum2, iDeno2);// this function shows <1/2> / <2/3> = ...
	cout << fracAns;


	//cout << endl;

	//myfraction.setNum(iFraction, iNum2);
	//myfraction.setDeno(iFraction, iDeno2);
	//myfraction.displayFraction();

	//myfraction.addFracs(iNum1, iDeno1, iNum2, iDeno2);
	//myfraction.subtractFrac(iNum1, iDeno1, iNum2, iDeno2);
	//myfraction.multiFrac(iNum1, iDeno1, iNum2, iDeno2);
	//myfraction.divFrac(iNum1, iDeno1, iNum2, iDeno2);*/


	system("pause");

	return 0; // indicate that program ended successfully 


}