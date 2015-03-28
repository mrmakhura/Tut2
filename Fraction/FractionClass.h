#ifndef FRACTIONCLASS_H //Read what this does
#define FRACTIONCLASS_H
#include <iomanip>
using namespace std;

class FractionClass
{

public :

	FractionClass( int = 0, int = 0); // constructor initializes values to 0
	~FractionClass();// destructor

	int getDeno();//makes it posible for user to read what ideno's value is
	int getNumer();//makes it posible for user to read what iNumer's value is

	void numMessage(int &);// this function prompts the user to set a numerator value and also extracts the user value
	void denoMessage(int &);// this function prompts the user to set a numerator value and also extracts the user value
	
	void displayMessage();//this is just used to show a intro message
	void displayFraction();// Function is used to display fraction as a proper or improper fraction
	
	void setNum( int &);// sets the numerator
	void setDeno( int &);//sets the denominator
	void incCounter();//imcreases counter

	
	void addFracs(int &, int &, int &, int &);
	void subtractFrac(int &, int &, int & ,int &);
	void multiFrac(int &, int &, int &, int &);
	void divFrac(int &, int &, int &, int &);
	
	FractionClass operator+(const FractionClass &);// + overload
	FractionClass operator-(const FractionClass &);// - overload
	FractionClass operator*(const FractionClass &);// * overload
	FractionClass operator/(const FractionClass &);// / overload

	friend ostream &operator<<(ostream&, FractionClass&); //we are making FractionClass and ostream friends so that ostream can see the 
	friend istream &operator>>(istream&, FractionClass&); //private members in FractionClass , similarlly with istream 

private:

	void doWorkings(int, int, int  &, int &, int &);
	
	int ideno;
	int inumer;
	int iCount = 0;

};

	ostream &operator<<(ostream&, FractionClass&);
	istream &operator>>(istream&, FractionClass&);

#endif
	
	