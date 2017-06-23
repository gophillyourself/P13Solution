#ifndef LINETYPE_H
#define LINETYPE_H

#include <iostream>
#include <fstream>
using namespace std;

class LineType
{

private:



public:
	LineType();
	LineType( int j, int k, int l ) : a(j), b(k), c(l) {}

	double a;
	double b;
	double c;
	double slope;


	void seta(int a);
	void setb(int b);
	void setc(int c);

	bool vertical (LineType& line); //ax + by = c
	double calcSlope( LineType& line); // calculate slope of each line
	bool equal (LineType& line1, LineType& line2);
	bool parallel( double slope1, double slope2); //slope1 == slope2
	bool perp (double slope1, double slope2); //slope1 * slope2 = -1
	void boolint(bool a);
	friend ostream& operator<<(LineType& other, ostream &output);
	friend istream& operator>>(LineType& other, istream &input);
	friend bool operator+ (LineType& other);
	friend bool operator- (LineType& other);
	friend bool operator==(LineType& other1, LineType& other2);

};


#endif
