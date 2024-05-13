#include "st.h"

bool st::SetLv(int i)
{
	if (i > 0) {
		lv = i;
		if (lv > 100) {
			lv = 99;
		}
		return true;
	}
	else {
		return false;
	}
}

void st::Calc()
{
	hp = lv * lv + 50;
	atk = lv * 10;
	def = lv * 9;
}

int st::GetHp()
{
	return hp;
}

int st::GetAtk()
{
	return atk;
}

int st::GetDef()
{
	return def;
}
