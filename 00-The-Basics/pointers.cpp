#include<iostream>



int main() {

    int x {30}, y {50};

    int *p, *q;

    std::cout << "X: " << x << ", Y: " << y << std::endl;

    p = &x;
    q = &y;

    std::cout << *p << std::endl;

    system("pause");
    return 0;
}