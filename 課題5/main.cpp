#include <iostream>
#include "Data.h"
using namespace std;

int main() {
	int i;
	cin >> i;

	Data d;

	d.SetValue(i);
	d.Disp();
}