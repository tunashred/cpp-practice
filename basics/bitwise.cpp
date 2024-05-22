#include <iostream>
#include <bitset>

int main () {
    std::bitset<8> bits{ 0b0011'1010 };
    std::cout << "bitset size: " << bits.size() << "\n";
    std::cout << bits.count() << " bits are set to true\n";
    std::cout << std::boolalpha;
    std::cout << "are all bits set to true?: " << bits.all() << "\n";
    std::cout << "are some bits true?: " << bits.any() << "\n";
    std::cout << "no bits are true?: " << bits.none() << "\n";

    std::cout << (bits << 2) << " shifted twice\n";
    std::cout << ~bits << " logical not\n";
    std::cout << (std::bitset<4> {0b0101} | std::bitset<4> {0b0110}) << " ORed two bitsets\n";
    std::cout << (std::bitset<4> {0b0110} & std::bitset<4> {0b0010}) << " ANDed two bitsets\n";
    std::cout << (std::bitset<4> {0b1100} ^ std::bitset<4> {0b0111}) << " XORed two bitsets\n";
    
 
    return 0;
}