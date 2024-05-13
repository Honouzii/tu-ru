#include "CircleClass.h"
#include <iostream>
using namespace std;

void CircleClass::Input()
{
	cout << "îºåaÇÕÅH:";
	cin >> r;
}

void CircleClass::Calc()
{
	//ÇﬂÇÒÇπÇ´Å[
	area = r * r * 3.14f;
}

void CircleClass::Disp()
{
	cout << "â~ÇÃñ êœ=" << area << endl;
}
