#include <iostream>

int main()
{
    std::cout << "Hallo Everynyan!" << std::endl;
    int score[10];

    // std::cout << "score [0] : " << score[0] << std::endl;
    // std::cout << "score [1] : " << score[1] << std::endl;

    for (size_t i = 0; i < 10; i++)
    {
        score[i] = i * 3;
    };

    for (size_t i = 0; i < 10; i++)
    {
        // std::cout << "score [" << i << "] : " << score[i] << std::endl;
    };

    const double salary[5]{12.5, 32.4, 34.4}; // the ones not initialized are 0
    // salary[2] = 9; cannot do this as array is constant

    for (size_t i = 0; i < 5; i++)
    {
        // std::cout << "salary [" << i << "] : " << salary[i] << std::endl;
    };

    int classSize[]{12, 32, 34, 65, 63, 45}; // the ones not initialized are 0

    for (int value : classSize)
    {
        // std::cout << "value : " << value << std::endl;
    };

    int sumOfClassSizes{0};

    for (int value : classSize)
    {
        sumOfClassSizes += value;
    };

    // std::cout << "Sum of class sizes : " << sumOfClassSizes << std::endl;
    // get size of an array
    // std::cout << "Size of class sizes array : " << std::size(classSize) << std::endl;

    int scores[]{0, 1, 5, 6, 3, 5, 74, 21, 34, 54};
    int scoresCount{std::size(scores)};

    for (size_t i = 0; i < scoresCount; i++)
    {
        // std::cout << "score [" << i << "] : " << score[i] << std::endl;
    }

    //  Char Arrays

    // char message[5]{"Hello"}; // gives error cuz no space for null operator defined
    char message[6]{"Hello"};

    // Print out the array through looping

    // std::cout << "message : ";
    for (auto c : message)
    {
        // std::cout << c;
    }
    // std::cout << std::endl;

    // Change characters in our array
    message[1] = 'a';

    // Print out the array through looping
    // std::cout << "message : ";
    for (auto c : message)
    {
        // std::cout << c;
    }
    // std::cout << std::endl;

    // Will probably print garbage after your char array

    // std::cout << "message : " << message << std::endl;

    // If a character array is null terminated, it's called as C-String

    char message1[]{'H', 'e', 'l', 'l', 'o', '\0'};
    // std::cout << "message1 : " << message1 << std::endl;
    // std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

    char message2[6]{'H', 'e', 'l', 'l', 'o'};
    // std::cout << "message2 : " << message2 << std::endl;
    // std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    char message3[]{'H', 'e', 'l', 'l', 'o'}; // This is not a c string , as there is not null character
    // std::cout << "message3 : " << message3 << std::endl;
    // std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;

    // String literal

    char message4[]{"Hallo Everynyan!"};
    // std::cout << "message4 : " << message4 << std::endl;
    // std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;

    // Can't safely print out arrays other than those of characters
    int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // std::cout << "numbers :  " << numbers << std::endl;

    // Bounds of array
    // std::cout << "numbers[12]  " << numbers[12] << std::endl;
    numbers[12] = 1000;
    // std::cout << "numbers[12]  " << numbers[12] << std::endl;
    // numbers[129999] = 1000;
    // std::cout << "numbers[129999]  " << numbers[129999] << std::endl; // crashes the program here
    std::cout << "Hallo" << std::endl; // not gonna print
}