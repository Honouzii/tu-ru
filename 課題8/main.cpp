#include <iostream>
#include "st.h"
using namespace std;

int main() {
	int lv;
	st  sst;
	while (true) {
		cout << "レベルを入力→";
		cin >> lv;

		if (!sst.SetLv(lv)) break;
		sst.Calc();
		cout << "HP=" << sst.GetHp() << endl;
		cout << "攻撃力=" << sst.GetAtk() << endl;
		cout << "防御力=" << sst.GetDef() << endl;
	}
	cout << "プログラムを終了します" << endl;
}