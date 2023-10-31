#include<iostream>



int main() {

    std::string texto {"Teste"};

    for(auto i : texto) {
        std::cout << i;
    }


    std::cout << std::endl;
    system("pause");
    return 0;
}