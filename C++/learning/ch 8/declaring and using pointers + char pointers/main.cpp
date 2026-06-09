#include <iostream>

int main()
{

    int *p_num{};
    double *p_frac_num{};

    int *p_num1{nullptr};
    double *p_frac_num1{nullptr};

    // std::cout << "sizeof(int) : " << sizeof(int) << std::endl;       // 4
    // std::cout << "sizeof(double) : " << sizeof(double) << std::endl; // 8
    // std::cout << "sizeof(double*) : " << sizeof(double *) << std::endl;
    // std::cout << "sizeof(int*) : " << sizeof(int *) << std::endl;
    // std::cout << "sizeof(p_num1) : " << sizeof(p_num1) << std::endl;
    // std::cout << "sizeof(p_frac_num1) : " << sizeof(p_frac_num1) << std::endl;

    int *p_num2{}, other_int_var{};  // pointer then int
    int *p_num3{}, other_int_var2{}; // pointer then int

    // std::cout << "sizeof(p_number5) : " << sizeof(p_num2) << std::endl;
    // std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    // std::cout << "sizeof(p_number6) : " << sizeof(p_num3) << std::endl;
    // std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var2) << std::endl;

    int int_var{43};
    int *p_int{&int_var}; // The address of operator (&);

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

    int int_var1{65};
    p_int = &int_var1; // Assign a different address to the pointer
    // std::cout << "p_int (with different address)  : " << p_int << std::endl;

    // char *message{"Hello World!"};
    const char *message{"Hello World!"};
    std::cout << "message : " << message << std::endl;

    //*message = "B"; // Compiler error
    std::cout << "*message : " << *message << std::endl;

    // Allow users to modify the string
    char message1[]{"Hello World!"};
    message1[0] = 'B';
    // std::cout << "message1 : " << message1 << std::endl;

    return 0;
}