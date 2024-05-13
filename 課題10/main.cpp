#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	float m; //–ÊÏ
	float r = 5.0f; //”¼Œa

	Circle c;

	m = c.Menseki(r);

	std::cout << "”¼Œa" << r << "‚Ì–ÊÏ‚Í:" << m << "c‡u" << endl;
}