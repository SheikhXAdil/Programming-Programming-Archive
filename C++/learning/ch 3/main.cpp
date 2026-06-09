#include <iostream>
#include <iomanip>

int main()
{
    int num1 = 14;
    int num2 = 016;
    int num3 = 0xE;
    int num4 = 0b00001110;
    int num5 = 0xEF;

    // std::cout << num1 << std::endl;
    // std::cout << num2 << std::endl;
    // std::cout << num3 << std::endl;
    // std::cout << num4 << std::endl;
    // std::cout << num5 << std::endl;

    //
    //
    //
    //
    //

    int bracedInt{11 + 12};
    // int bracedIntWithDecimal{11.12};  error
    int functionalInt(12);
    int functionalIntWithDecimal(12.12);
    int assignmentInt = 14;
    int assignmentIntWithDecimal = 14.97;

    // std::cout << bracedInt << std::endl;
    // std::cout << functionalInt << std::endl;
    // std::cout << functionalIntWithDecimal << std::endl;
    // std::cout << assignmentInt << std::endl;
    // std::cout << assignmentIntWithDecimal << std::endl;

    // std::cout << "size of int in bits: " << sizeof(int) << std::endl;
    // std::cout << "size of assignmentInt in bits: " << sizeof(assignmentInt) << std::endl;

    //
    //
    //
    //
    //

    signed int signed_int{10};
    signed int signed_int_2{-20};
    // unsigned int unsigned_int{-10}; // compailer error
    unsigned int unsigned_int_2{20};

    // std::cout << signed_int << std::endl;
    // std::cout << signed_int_2 << std::endl;
    // // std::cout << unsigned_int << std::endl;
    // std::cout << unsigned_int_2 << std::endl;

    //
    //
    //
    //
    //

    float floatNum{2.12345678901234567890f};            // precision: 7
    double doubleNum{2.12345678901234567890};           // precision: 15
    long double longDoubleNum{2.12345678901234567890L}; // precision: 15+

    // std::cout << std::setprecision(20); // control the precision in cout
    // std::cout << floatNum << std::endl;
    // std::cout << "size of floatNum in bits: " << sizeof(floatNum) << std::endl;
    // std::cout << doubleNum << std::endl;
    // std::cout << "size of doubleNum in bits: " << sizeof(doubleNum) << std::endl;
    // std::cout << longDoubleNum << std::endl;
    // std::cout << "size of longDoubleNum in bits: " << sizeof(longDoubleNum) << std::endl;

    //
    //
    //
    //
    //

    float floatNum1{1234567890.0f};
    // std::cout << floatNum1 << std::endl;
    double doubleNum1{1234567890123456789.0};
    // std::cout << doubleNum1 << std::endl;
    long double longdoubleNum1{1234567890123456789.0L};
    // std::cout << longdoubleNum1 << std::endl;

    //
    //
    //
    //
    //

    double doubleNum2{5.6};
    double doubleNum3{-2.3};
    double doubleNum4{};
    double doubleNum5{};
    double doubleResult1{doubleNum2 / doubleNum5}; // infinity
    // std::cout << doubleResult1 << std::endl;
    double doubleResult2{doubleNum3 / doubleNum5}; // -infinity
    // std::cout << doubleResult2 << std::endl;
    double doubleResult3{doubleNum4 / doubleNum5}; // NaN
    // std::cout << doubleResult3 << std::endl;

    //
    //
    //
    //
    //

    // std::cout << "size of bool in bits: " << sizeof(bool) << std::endl;
    bool trueVar{true};
    bool falseVar{false};
    // std::cout << trueVar << std::endl;
    // std::cout << falseVar << std::endl;
    // std::cout << std::boolalpha;
    // std::cout << trueVar << std::endl;
    // std::cout << falseVar << std::endl;

    //
    //
    //
    //
    //

    // std::cout << "size of char in bits: " << sizeof(char) << std::endl;

    // char is used to store a single character. we can also store characters using ASCII codes. We can store 255 different characters in it as char occupies one byte

    char char1{'A'};
    char char2{65}; // ASCII code for A
    // std::cout << "char1: " << char1 << std::endl;
    // std::cout << "char2: " << char2 << std::endl;
    // std::cout << "char2(int): " << static_cast<int>(char2) << std::endl;

    //
    //
    //
    //
    //

    // auto deduction of type.
    auto auto1{1};
    auto auto2{1.2};
    auto auto3{1.2f};
    auto auto4{1.2L};
    auto auto5{"a"};
    auto auto6{123u};
    auto auto7{123ul};
    auto auto8{123ll};
    auto auto9{123ull};

    return 0;
}