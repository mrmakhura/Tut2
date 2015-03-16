#ifndef FRACTIONCLASS_H //Read what this does
#define FRACTIONCLASS_H

class FractionClass
{
public :
	FractionClass();
	void displayMessage();
	void displayFraction(int &, int & );
	void setNum(int &, int &);
	void setDeno(int &, int &);
	void addFracs(int &, int &, int &, int &);
	void subtractFrac(int &, int &, int & ,int &);
	void multiFrac(int &, int &, int &, int &);
	void divFrac(int &, int &, int &, int &);
private:
	void doWorkings(int, int, int  &, int &, int &);
};

#endif
