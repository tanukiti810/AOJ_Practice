//長方形の中の円
#include <iostream>

using namespace std;

int main() {
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;

	if ((x + r <= W && x >= r) && (y + r <= H && y >= r)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}