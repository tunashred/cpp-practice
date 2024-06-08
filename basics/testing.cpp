#include <iostream>

consteval auto compileTime(auto val) {
    return val;
}

constexpr int moo(int x, int y) {
    return x > y ? x : y;
}

int main() {
    constexpr int g { moo(6, 9) };
    std::cout << g << '\n';

    std::cout << compileTime(moo(4, 2)) << '\n';

//    int x = 420;
//    std::cout << moo(x, 6);
}