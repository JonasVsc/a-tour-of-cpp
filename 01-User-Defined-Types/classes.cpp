#include<iostream>

class Vector {
public:
    Vector(int size);
    int& operator[](int i) { return elem[i]; } // sobrecarga de operador

private:
    int* elem;
    int size;
};

int main() {

    Vector a(20);

    for(auto i = 0; i < 20; i++) {
        std::cout << a[i] << "\n";
    }
    
    system("pause");
    return 0;
}


Vector::Vector(int size) : elem{new int[size]}, size{size} {
    for(auto i = 0; i < size; i++) {
        elem[i] = i;
    }
}



    