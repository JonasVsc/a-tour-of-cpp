#include<iostream>

enum class Messages { error, alert, success};
enum ImplicitEnum { A, B, C};


int main() {
    Messages a;

    a = Messages::alert;

    switch(a) {
        case Messages::error: 
            std::cout << "Error\n";
            break;
        case Messages::alert:
            std::cout << "Alert\n";
            break;
        case Messages::success:
            std::cout << "Success\n";
            break;
    }    

    // hey = 1 , because Enum works like this: A = 0, B = 1, C = 2...
    // you can do this because is a Implicit Enum
    int hey = ImplicitEnum::B;
    std::cout << hey << std::endl;


    system("pause");
    return 0;
}