#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	float m; //�ʐ�
	float r = 5.0f; //���a

	Circle c;

	m = c.Menseki(r);

	std::cout << "���a" << r << "�̖ʐς�:" << m << "c�u" << endl;
}