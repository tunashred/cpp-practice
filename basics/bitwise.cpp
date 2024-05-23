#include <bitset>
#include <iostream>

// rotl = rotate left
std::bitset<4> rotl_my_version(std::bitset<4> bits) {
	std::bitset<4> result {bits << 1};
	result[0] = bits.test(3);
	return result;
}

std::bitset<4> rotl_better(std::bitset<4> bits) {
	bool msb = bits.test(3);
	bits <<= 1;
	if(msb) {
		bits[0] = msb;
	}
	return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl_my_version(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl_better(bits2) << '\n';

	return 0;
}