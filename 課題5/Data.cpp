#include "Data.h"
#include <iostream>
using namespace std;


void Data::SetValue(int a)
{
	Value = a;
}

void Data::Disp()
{
	cout << "メンバ変数の値は" << Value << endl;
}
