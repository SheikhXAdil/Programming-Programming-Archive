#include <iostream>

int main()
{

    for (unsigned int i{0}; i < 10; i++)
    {
        std::cout << "Hallo Everynyan" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << std::endl;
    // size_t is a type alias (representation) for unsigned int used for storing sizes which cannot be l=negative. it's size is 8 bytes

    for (size_t i{0}; i < 10; ++i)
    {
        std::cout << "Hallo Everynyan. This is turn " << i << std::endl;
    }

    std::cout << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << std::endl;

    size_t j{0};

    std::cout << "Before loop, j is " << j << std::endl;
    for (j; j < 10; j++)
    {
        std::cout << "How are you? Fine Thank You!" << std::endl;
    }
    std::cout << "After loop, j is " << j << std::endl;

    std::cout << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << std::endl;

    size_t k{0};

    for (; k < 10; k++)
    {
        std::cout << "Ohhh Mai Gudddddddd" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << std::endl;

    const size_t COUNT{10};

    for (size_t k{0}; k < COUNT; k++)
    {
        std::cout << "O I wish I were a bird" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << std::endl;

    const size_t WHILECOUNT{10};
    size_t i{0};

    while (i < WHILECOUNT)
    {
        std::cout << "Nande ego shabettoru" << std::endl;
        i++;
    }

    std::cout << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << std::endl;

    const size_t DOWHILECOUNT{10};
    size_t m{11};

    do
    {
        std::cout << "Do this while l less then 10. Right now it is " << m << std::endl;
        std::cout << "Do while loop runs at least once. it first runs then checks the condition" << std::endl;
        m++;
    } while (m < DOWHILECOUNT);

    //
    //

    return 0;
}