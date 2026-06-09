// Hallo Everynyan! How are you, fine Thank You.

#include <iostream>
#include <string>

// int addNumber(int num1, int num2)
// {
//     return num1 + num2;
// }

int main()
{

    // Hello World
    // std::cout << "Hello World" << std::endl;
    // std::cout << "Hello World"
    //           << "hi"
    //           << std::endl;

    // Runtime error

    // int val = 7 / 0;
    // std::cout << "value:" << val << std::endl;

    // First Function

    // int firstNum{23};
    // int secondNum{7};
    // int sum = addNumber(firstNum, secondNum);

    // std::cout << sum << std::endl;
    // std::cout << addNumber(68, 1) << std::endl;

    // Input output

    // int age;
    // std::string name;

    // std::cout << "Please enter your name and age: " << std::endl;

    // std::cin >> name;
    // std::cin >> age;
    // std::cin >> name >> age;

    // std::cout << "Your name is " << name << " and your age is " << age << std::endl;

    int age;
    std::string fullName;
    std::cout << "Please enter your full name and age: " << std::endl;
    std::getline(std::cin, fullName);
    std::cin >> age;
    std::cout << "Your full name is " << fullName << " and your age is " << age << std::endl;

    return 0;
}

// Ohhhhhh Maiiiii Goddddddddd