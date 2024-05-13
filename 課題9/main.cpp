#include <iostream>
void Function();
#include "Sample9.h"
using namespace std;

int main() {
	cout << "プログラム開始" << endl;
	Function();
	cout << "プログラム終了" << endl;
}

void Function() {
	cout << "関数が呼び出されました" << endl;

	//インスタンス作成
	Sample9 instSample;

	//メンバ関数実行
	instSample.menberFunc();
}