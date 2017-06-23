#include <iostream>
#include "LineType.h"

using namespace std;

LineType::LineType(): a(0) {}  //Default constructor

// Constructor uses initialization list to set a

//LineType::LineType( int j, int k, int l ) : a(j), b(k), c(l) {}

// Constructor uses assignment to set a

/*LineType::LineType( const LineType& other )
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
