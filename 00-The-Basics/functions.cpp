#include<iostream>
#include<complex>

void print_sqrt(double n);
int randomize();


int main() {

    print_sqrt(25);

   
    std::cout << randomize() << std::endl;
    system("pause");
    return 0;
}


void print_sqrt(double n) {
    std::cout << sqrt(n) << " raiz de " << n << std::endl;
}

int randomize() {
    srand(332131);
    return rand();
}
