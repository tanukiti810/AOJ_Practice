//不足しているカードの発見
#include <iostream>
using namespace std;

int main() {
	bool number[4][13];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			number[i][j] = false;
		}
	}

	int input_num;
	cin >> input_num;
	string chr;
	int c_num, t_num;
	for (int i = 0; i < input_num; i++) {
		cin >> chr >> t_num;
		if (chr == "S") {
			c_num = 0;
		}
		else if (chr == "H") {
			c_num = 1;
		}
		else if (chr == "C") {
			c_num = 2;
		}
		else {
			c_num = 3;
		}
		number[c_num][t_num - 1] = true;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (number[i][j] == false) {
				if (i == 0) {
					chr = "S";
				}
				else if (i == 1) {
					chr = "H";
				}
				else if (i == 2) {
					chr = "C";
				}
				else {
					chr = "D";
				}
				cout << chr << " " << j + 1 << endl;
			}
		}
	}
	return 0;
}