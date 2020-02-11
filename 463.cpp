#include <iostream>
using namespace std;

int main() {
	int left1, right1, up1, down1, left2, right2, up2, down2;
	cin >> left1 >> right1 >> up1 >> down1 >> left2 >> right2 >> up2 >> down2;
	if ((min(right1, right2) >= max(left1, left2)) && min(down1, down2) >= max(up1, up2)) {
		cout << (min(right1, right2) - max(left1, left2)) * (min(down1, down2)- max(up1, up2));
	} else {
		cout << 0;
	}
	return 0;
}
