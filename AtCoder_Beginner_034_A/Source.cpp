/*
��蕶
�����N�����e�X�g���󂯂܂����B���ڂ̓��_�� x �_�A���ڂ̓��_�� y �_�ł����B�܂��A���ڂƓ��ڂ̓��_�͈قȂ���̂ł����B
�����N�̓��_�͉��P���܂������B�����N�̓��ڂ̓��_�����ڂ̓��_��荂���Ȃ��Ă���ꍇ�� "Better"�A�Ⴍ�Ȃ��Ă���ꍇ�� "Worse" �Əo�͂��Ă��������B
*/

#include<iostream>

int main() {
	int first, second;
	std::cin >> first >> second;

	if (first < second) {
		std::cout << "Better" << std::endl;
	}
	else {
		std::cout << "Worse" << std::endl;
	}

	return 0;
}