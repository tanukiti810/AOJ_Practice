#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	string op;

	while (op != "?") {
		cin >> a >> op >> b;
		if (op == "+") {
			cout << a + b << endl;
		}
		else if (op == "-") {
			cout << a - b << endl;
		}
		else if (op == "*") {
			cout << a * b << endl;
		}
		else if (op == "/") {
			cout << a / b << endl;
		}
	}
	return 0;
}

