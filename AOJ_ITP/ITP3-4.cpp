//–ñ”‚Ì”
#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int div = 0;

	if (a < b) {
		for (int i = a; i <= b; i++) {
			if (c % i == 0) {
				div++;
			}
		}
	}
	else if (a == b) {
		if (c % a == 0) {
			div = 1;
		}
	}

	cout << div << endl;
	
	return 0;
}