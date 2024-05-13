#include <iostream>
#include "Status.h"
using namespace std;

int main() {
	int lv;
	Status st;

	cout << "ƒŒƒxƒ‹‚ð“ü—Í¨";
	cin >> lv;

	st.SetLv(lv);
	st.Calc();

	cout << "HP=" << st.GetHp() << endl;
	cout << "UŒ‚—Í=" << st.GetAtk() << endl;
	cout << "–hŒä—Í=" << st.GetDef() << endl;
}