#include <iostream>

int add(int x, int y) {
    return x + y;
}

template <typename T>
T add(T x, T y) = delete;

int main() {
    add(69, 420);
    // calling deleted functions will halt compilation
    add(6.9 , 4.2); // function deleted

    add(4.0, 2.0); //  function deleted

    add('c', 'a'); //  function deleted


    return 0;
}