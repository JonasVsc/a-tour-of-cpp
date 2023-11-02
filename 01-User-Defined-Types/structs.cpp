#include<iostream>


// Igual classe, entretanto seus atributos, por padrão são públicos
struct Teste {
    std::string nome;
    int value;

};


int main() {


    Teste A;

    A.nome = "Teste";
    A.value = 30;
    return 0;
}