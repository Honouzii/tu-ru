#include "CircleClass.h"
#include <iostream>
using namespace std;

void CircleClass::Input()
{
	cout << "���a�́H:";
	cin >> r;
}

void CircleClass::Calc()
{
	//�߂񂹂��[
	area = r * r * 3.14f;
}

void CircleClass::Disp()
{
	cout << "�~�̖ʐ�=" << area << endl;
}
