#include<iostream>
#include"include/Vector.h"



Vector::Vector(int size)
    :elem{new double[size]}, size{size} // initialize members
{
}

double& Vector::operator[](int i)
{
    return elem[i];
}