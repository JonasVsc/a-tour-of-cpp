#include<iostream>

// Um tipo concreto são tipos de dados que têm uma representação física na memória.
// Os tipos concretos são usados para armazenar dados e realizar operações sobre esses dados.

class Complex { 
public:
    Complex() : real{0}, imag{0} {}
    Complex(int r) : real{r}, imag{0} {}
    Complex(int r, int i) : real{r}, imag{i} {}


    int show_real();
    int show_imag();
private:
    int real, imag;
};



int Complex::show_real()
{
    return real;
}
int Complex::show_imag()
{
    return imag;
}


int main()
{
    Complex a{2, 3};


    std::cout << a.show_real() << std::endl;
    std::cout << a.show_imag() << std::endl;


    system("pause");
    return 0;
}