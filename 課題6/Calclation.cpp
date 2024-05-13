#include "Calclation.h"
#include <iostream>
using namespace std;

void Calclation::SetA(float a)
{
	this->a = a;
}

void Calclation::SetB(float b)
{
	this->b = b;
}

void Calclation::Disp()
{
	cout << a + b << endl;
	cout << a - b << endl;
}
