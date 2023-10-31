#include<iostream>


int main() {
    /*
    • A type defines a set of possible values and a set of operations (for an object).
    • An object is some memory that holds a value of some type.
    • A value is a set of bits interpreted according to a type.
    • A variable is a named object
    */

    int a {2}, b {3}, sum;
    auto deducedByInitializer = "I am deduced by the initializer";

    sum = a + b;

    std::cout << sum << std::endl;
    

    system("pause");
    return 0;
}


