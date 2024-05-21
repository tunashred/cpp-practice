#include <iostream>
#include <bitset>

int main () {
    std::bitset<8> mybitset { 0b0000'0101};

    mybitset.set(3);
    std::cout << "First set: " << mybitset;
    mybitset.set(3);
    std::cout << "\nSecond set: " << mybitset;

    mybitset.flip(0);
    std::cout << "\nFirst flip: " << mybitset;
    mybitset.flip(0);
    std::cout << "\nSecond flip: " << mybitset;

    mybitset.reset(3);
    std::cout << "\nReseted a set bit: " << mybitset;
    mybitset.reset(0);
    std::cout << "\nReseted a flipped bit: " << mybitset;
    mybitset.reset(2);
    std::cout << "\nReseted a random 1bit: " << mybitset << "\n";
 
 
    return 0;
}