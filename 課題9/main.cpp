#include <iostream>
void Function();
#include "Sample9.h"
using namespace std;

int main() {
	cout << "�v���O�����J�n" << endl;
	Function();
	cout << "�v���O�����I��" << endl;
}

void Function() {
	cout << "�֐����Ăяo����܂���" << endl;

	//�C���X�^���X�쐬
	Sample9 instSample;

	//�����o�֐����s
	instSample.menberFunc();
}