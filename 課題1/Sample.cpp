
#include <iostream>
#include "Sample.h"
using namespace std;

void Sample::Input()
{
	a = 20;
	b = 3;
}

void Sample::Plus()
{
	c = a + b;
}

void Sample::Disp()
{
	cout << "変数Cの値は" << c << endl;
}
