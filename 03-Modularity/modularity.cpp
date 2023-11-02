#include<iostream>
#include"include/Vector.h"



int main() {

    Vector a(20);

    for(auto i = 0; i < 20; i++) {
        a[i] = i;
    }


    for(auto i = 0; i < 20; i++) {
        std::cout << "[" << i << "] " << a[i] << std::endl;
    }


    system("pause");
    return 0;
}