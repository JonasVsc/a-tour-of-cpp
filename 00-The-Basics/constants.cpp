#include<iostream>

constexpr double PI = 3.1432132143523;


// constexpr is a modifier that means expressions and varibles will be evaluate in compile time.
// useful for better program performance, security and legibility.
constexpr int FunctionOnCompilation() {
    return;
}

int main () {

    FunctionOnCompilation();

    system("pause");
    return 0;
}