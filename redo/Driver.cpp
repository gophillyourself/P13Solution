#include <iostream>
#include "LineType.h"

using namespace std;

int main ()
{
	LineType line1(2,3,5);
	LineType line2(-3,2,5);

	if(!line1.vertical(line1) && !line2.vertical(line2))
	{
		cout<<"Slope of line 1 "<<line1.calcSlope(line1)<<endl;
		cout<<"Slope of line 2 "<<line2.calcSlope(line2)<<endl;
		cout<<"Line 1 is equal to Line: 2 ";
		line1.boolint(line1.equal(line1, line2));

		cout<<"Line 1 is parallel to Line 2: ";
		line1.boolint(line1.parallel(line1.slope, line2.slope));

		cout<<"Line 1 is perpendicular to Line 2: ";
		line1.boolint(line1.perp(line1.slope, line2.slope));


	}

	return 0;
}
