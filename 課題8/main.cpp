#include <iostream>
#include "st.h"
using namespace std;

int main() {
	int lv;
	st  sst;
	while (true) {
		cout << "���x������́�";
		cin >> lv;

		if (!sst.SetLv(lv)) break;
		sst.Calc();
		cout << "HP=" << sst.GetHp() << endl;
		cout << "�U����=" << sst.GetAtk() << endl;
		cout << "�h���=" << sst.GetDef() << endl;
	}
	cout << "�v���O�������I�����܂�" << endl;
}