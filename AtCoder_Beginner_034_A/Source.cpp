/*
問題文
高橋君が二回テストを受けました。一回目の得点は x 点、二回目の得点は y 点でした。また、一回目と二回目の得点は異なるものでした。
高橋君の得点は改善しましたか。高橋君の二回目の得点が一回目の得点より高くなっている場合は "Better"、低くなっている場合は "Worse" と出力してください。
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