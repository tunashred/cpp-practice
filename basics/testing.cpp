#include <iostream>
#include <cstdint>

int main()
{
    //std::int8_t and std::uint8_t are actually chars, not integers ;d
    std::int8_t myInt{65};
    std::cout << myInt << '\n';

	return 0;
}