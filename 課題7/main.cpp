#include <iostream>
#include "Status.h"
using namespace std;

int main() {
	int lv;
	Status st;

	cout << "���x������́�";
	cin >> lv;

	st.SetLv(lv);
	st.Calc();

	cout << "HP=" << st.GetHp() << endl;
	cout << "�U����=" << st.GetAtk() << endl;
	cout << "�h���=" << st.GetDef() << endl;
}