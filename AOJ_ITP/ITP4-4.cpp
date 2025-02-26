#include <iostream>
using namespace std;

int main() {
	int n, min = 1000000, max = -1000000;
	long long sum = 0;
	cin >> n;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
		if (a > max) {
			max = a;
		}
		if (a < min) {
			min = a;
		}
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}