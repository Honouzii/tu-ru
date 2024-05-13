#include <iostream>
#include "st.h"
using namespace std;

int main() {
	int lv;
	st  sst;
	while (true) {
		cout << "ƒŒƒxƒ‹‚ð“ü—Í¨";
		cin >> lv;

		if (!sst.SetLv(lv)) break;
		sst.Calc();
		cout << "HP=" << sst.GetHp() << endl;
		cout << "UŒ‚—Í=" << sst.GetAtk() << endl;
		cout << "–hŒä—Í=" << sst.GetDef() << endl;
	}
	cout << "ƒvƒƒOƒ‰ƒ€‚ðI—¹‚µ‚Ü‚·" << endl;
}