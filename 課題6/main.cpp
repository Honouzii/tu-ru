#include <iostream>
#include "Calclation.h"
using namespace std;

int main() {
	float a = 42.195f; 
	float b = 3.14;

	Calclation x;

	x.SetA(a);
	x.SetB(b);
	x.Disp();
}