#include <iostream>
#include <fstream>
#include "LineType.h"

using namespace std;

LineType::LineType(): a(0) {}  //Default constructor

// Constructor uses initialization list to set a

//LineType::LineType( int j, int k, int l ) : a(j), b(k), c(l) {}

// Constructor uses assignment to set a

/*LineType::LineType(const LineType& other )
{
	a=other.a;
  b=other.b;
  c=other.c;
}*/
bool LineType::vertical (LineType& line)
{
  if(b == 0)
    return true;
  return false;
}

double LineType::calcSlope( LineType& line)
{
	slope = a/b;
  return a/b;
}
bool LineType::equal (LineType& line1, LineType& line2)
{
  if(line1.a == line2.a && line1.b == line2.b && line1.c == line2.c)
    return true;
  return false;
}
bool LineType::parallel(double slope1, double slope2)
{
  if(slope1 == slope2)
    return true;
  return false;
}
bool LineType::perp(double slope1, double slope2)
{
  double perp_temp;
  perp_temp = slope1 * slope2;
  if(perp_temp == -1)
    return true;
  return false;
}
void LineType::boolint(bool a)
{
	if(a)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
}
void operator<<(LineType& other, ostream &output)
{
	output<<other.calcSlope(other)<<endl;
}
void operator>>(LineType& other, istream& input)
{
	input>>other.a;
	input>>other.b;
	input>>other.c;
}
bool operator+(LineType& other)
{
	bool vert = other.vertical(other);
	return vert;
}
bool operator-(LineType& other)
{
	bool horizontal = false;
	if(other.a = 0)
		horizontal = true;
	return horizontal;
}
bool operator== (LineType& other1, LineType& other2)
{
  return other1.equal(other1, other2);
}
bool operator||(LineType& other1, LineType& other2)
{
  return other1.parallel(other1.slope, other2.slope);
}
bool operator&&(LineType& other1, LineType& other2)
{
  return other1.perp(other1.slope, other2.slope);
}
