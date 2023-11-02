// example of an interface file


class Vector {
public:
    Vector(int size);
    double& operator[](int i);
private:
    int size;
    double* elem;
};