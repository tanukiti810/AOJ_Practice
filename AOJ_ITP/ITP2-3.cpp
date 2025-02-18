#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int numbers[3];
	cin >> numbers[0] >> numbers[1] >> numbers[2];

	sort(numbers, numbers + 3);

	cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << endl;

	return 0;
}