#ifndef FRACTIONCLASS_H //Read what this does
#define FRACTIONCLASS_H

class FractionClass
{

	friend ostream &operator<<(ostream &, const FractionClass &);//Help
	friend istream &operator>>(istream &, const FractionClass &);//Help

public :
	FractionClass( int = 0, int = 0); // constructor initializes values to 0
	~FractionClass();
	void numMessage(int &, int & );// this function prompts the user to set a numerator value and also extracts the user value
	void denoMessage(int &, int & );// this function prompts the user to set a numerator value and also extracts the user value
	void displayMessage();//this is just used to show a intro message
	void displayFraction();// Function is used to display fraction as a proper or improper fraction
	void setNum( int &);// sets the numerator
	void setDeno( int &);//sets the denominator
	void addFracs(int &, int &, int &, int &);
	void subtractFrac(int &, int &, int & ,int &);
	void multiFrac(int &, int &, int &, int &);
	void divFrac(int &, int &, int &, int &);
	FractionClass operator+(const FractionClass &);
	FractionClass operator-(const FractionClass &);
	FractionClass operator*(const FractionClass &);
	FractionClass operator/(const FractionClass &);


private:
	void doWorkings(int, int, int  &, int &, int &);
	int ideno;
	int inumer;

};

#endif
