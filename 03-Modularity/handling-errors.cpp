#include<iostream>




int main()
{

    int a, b = 40;
    char c = 'w';
    try
    {
        a = b + c;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    system("pause");
    return 0;
}