#include <iostream>

int main()
{

    int val1{33};
    double val2{33.6};
    int &refToVal1{val1};
    double &refToVal2 = val2;

    std::cout << "val1 :" << val1 << std::endl;
    std::cout << "val2 :" << val2 << std::endl;
    std::cout << "refToVal1 :" << refToVal1 << std::endl;
    std::cout << "refToVal2 :" << refToVal2 << std::endl;
    std::cout << "&val1 :" << &val1 << std::endl;
    std::cout << "&val2:" << &val2 << std::endl;
    std::cout << "&refToVal1 :" << &refToVal1 << std::endl;
    std::cout << "&refToVal2 :" << &refToVal2 << std::endl;

    std::cout << "-------------------------------------" << val1 << std::endl;

    val1 = 69;
    val2 = 69.69;

    std::cout << "val1 :" << val1 << std::endl;
    std::cout << "val2 :" << val2 << std::endl;
    std::cout << "refToVal1 :" << refToVal1 << std::endl;
    std::cout << "refToVal2 :" << refToVal2 << std::endl;
    std::cout << "&val1 :" << &val1 << std::endl;
    std::cout << "&val2:" << &val2 << std::endl;
    std::cout << "&refToVal1 :" << &refToVal1 << std::endl;
    std::cout << "&refToVal2 :" << &refToVal2 << std::endl;

    std::cout << "-------------------------------------" << val1 << std::endl;

    refToVal1 = 6969;
    refToVal2 = 69.6969;

    std::cout << "val1 :" << val1 << std::endl;
    std::cout << "val2 :" << val2 << std::endl;
    std::cout << "refToVal1 :" << refToVal1 << std::endl;
    std::cout << "refToVal2 :" << refToVal2 << std::endl;
    std::cout << "&val1 :" << &val1 << std::endl;
    std::cout << "&val2:" << &val2 << std::endl;
    std::cout << "&refToVal1 :" << &refToVal1 << std::endl;
    std::cout << "&refToVal2 :" << &refToVal2 << std::endl;

    return 0;
}