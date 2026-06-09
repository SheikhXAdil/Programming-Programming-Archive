#include <iostream>
#include <limits>

int main()
{
    int num1{42};
    int num2{8};
    int sum{num1 + num2};
    int subtract{num1 - num2};
    int multiply{num1 * num2};
    int divide{num1 / num2}; // returns an integer lower to the actual fractional result not a fractional number
    int modulo{num1 % num2};
    // std::cout << sum << std::endl;
    // std::cout << subtract << std::endl;
    // std::cout << multiply << std::endl;
    // std::cout << divide << std::endl;
    // std::cout << modulo << std::endl;

    //
    //
    //
    //
    //

    // Postfix + and -
    int num3{5};
    // std::cout << "the value of num3 (incrementing) is " << num3++ << std::endl;
    // std::cout << "the value of num3 (incremented) is " << num3 << std::endl;
    num3 = 5;
    // std::cout << "the value of num3 (decrementing) is " << num3-- << std::endl;
    // std::cout << "the value of num3 (decremented) is " << num3 << std::endl;

    // Prefix + and -
    num3 = 5;
    // std::cout << "the value of num3 (incremented) is " << ++num3 << std::endl;
    num3 = 5;
    // std::cout << "the value of num3 (decremented) is " << --num3 << std::endl;

    // prefix compound operators
    int num4{6};
    num4 += 2;
    // std::cout << "the value of num4 (after += 2) is " << num4 << std::endl;
    num4 = 6;
    num4 -= 2;
    // std::cout << "the value of num4 (after -= 2) is " << num4 << std::endl;
    num4 = 6;
    num4 *= 2;
    // std::cout << "the value of num4 (after *= 2) is " << num4 << std::endl;
    num4 = 6;
    num4 /= 2;
    // std::cout << "the value of num4 (after /= 2) is " << num4 << std::endl;
    num4 = 6;
    num4 %= 4;
    // std::cout << "the value of num4 (after 5= 4) is " << num4 << std::endl;

    //
    //
    //
    //
    //

    // std::cout << "num3 > num4: " << num3 > num4 << std::endl; // gives error, use brackets
    // std::cout << "num3 == num4: " << (num3 == num4) << std::endl;

    // Logical operators: && || !

    //
    //
    //
    //
    //
    //

    short int var1{10}; // 2 bytes
    short int var2{20};

    char var3{40}; // 1
    char var4{50};

    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << std::endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 4
    std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4

    return 0;
}