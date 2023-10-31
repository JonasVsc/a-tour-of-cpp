#include<iostream>

const double PI = 3.14;

constexpr int ValueCalculedOnCompilation(int n) {
    n++;
    return n;
}

int main () {

    std::cout << ValueCalculedOnCompilation(4);

    system("pause");
    return 0;
}