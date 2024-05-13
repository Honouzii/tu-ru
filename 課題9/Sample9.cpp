#include "Sample9.h"
#include <iostream>
using namespace std;

Sample9::Sample9()
{
	cout << "コンストラクタが呼び出されました" << endl;
}

Sample9::~Sample9()
{
	cout << "デストラクタが呼び出されました" << endl;
}

void Sample9::menberFunc()
{
	cout << "クラスのメンバ関数が呼び出されました" << endl;
}
