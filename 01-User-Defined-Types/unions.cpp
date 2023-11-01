#include<iostream>

// All members of a union is allocated in same address
// The allocated memory is for the largest member, so, if you define float, then you define double you will delete the float value
// and you will rewrite for the double value basically.
union Ohmyga {
    int hi;
    float everyuman;
    double* help;
};
