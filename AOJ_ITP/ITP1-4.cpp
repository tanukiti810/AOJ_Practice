#include <iostream>

using namespace std;

int main() {
	int S;
	cin >> S;
	int h = S / 3600, m = (S % 3600) / 60, s = S % 60;
	cout << h << ":" << m << ":" << s << endl;
	return 0;
}
