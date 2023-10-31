#include<iostream>

void search(const std::string& text, const char& val) {
    for(auto i : text) {
        if(i == val) {
            std::cout << "has \"" << val << "\"" << std::endl;
            return;
        }
    }
    std::cout << "no has " << val << std::endl;
}

int main() {

    std::string texto {"Teste"};

    search(texto, 's');

    system("pause");
    return 0;
}