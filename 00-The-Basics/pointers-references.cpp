#include<iostream>



int main() {

    // Pointer is a Reference
    int hey;

    int* ptr;
    int& ref = hey;

    int a, b;

    // A reference and a pointer both refer/point to an object and both are represented
    // in memory as machine address.
    ptr = &a;

    a = 20;

    system("pause");
    return 0;
}