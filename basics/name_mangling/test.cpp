#include <iostream>

int add(int x, int y) {
	return x + y;
}

float add(float x, float y) {
	return x + y;
}

int main() {
	int xi = 69, yi = 420;
	float xf = 6.9, yf = 4.20;

	add(xi, yi);
	add(xf, yf);

	return 0;
}
