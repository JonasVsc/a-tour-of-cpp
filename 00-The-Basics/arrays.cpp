#include <iostream>

int main() {
    int v[3] {1, 2, 3};

    // Altera o valor de v[2] para 22.
    v[2] = 22;

    // Imprime o vetor i a partir de uma copia de v para i.
    for (auto i : v) {
        std::cout << i << " ";
    }

    // Referencia o vetor v em i.
    for (auto& i : v) {
        std::cout << i << " ";
    }
    system("pause");
    return 0;
}