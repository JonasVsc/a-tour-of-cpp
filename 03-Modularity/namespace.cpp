#include<iostream>



namespace myNamespaceArea
{
    void message()
    {
        std::cout << "hey\n";
    }
}




int main() {
    myNamespaceArea::message();

    system("pause");
    return 0;
}