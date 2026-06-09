#include <iostream>

// to get the number of digits in a number
int digitCount(int number, int count = 0)
{
    if (number == 0)
    {
        return (count == 0) ? 1 : count;
    }
    else
    {
        return digitCount(number / 10, count + 1);
    }
}

// switch statement check to replace digit with its corresponding word
std::string digitToWord(int digit)
{
    switch (digit)
    {
    case 0:
        return "";
    case 1:
        return "ONE";
    case 2:
        return "TWO";
    case 3:
        return "THREE";
    case 4:
        return "FOUR";
    case 5:
        return "FIVE";
    case 6:
        return "SIX";
    case 7:
        return "SEVEN";
    case 8:
        return "EIGHT";
    case 9:
        return "NINE";
    default:
        return "Invalid";
    }
}

/*
 function that takes the number (in this case number by user) and the position of a digit of it (last digit is at position 0 and 2nd last at 1 and so on)
*/
std::string changeDigitToWord(int number, int position)
{
    if (position < 0)
    {
        return "Invalid Position";
    }

    if (position == 0)
    {
        int digit = number % 10;
        return digitToWord(digit);
    }

    return changeDigitToWord(number / 10, position - 1);
}

int main()
{

    int inputNumber;

    std::cout << "Enter the number: " << std::endl;
    std::cin >> inputNumber;

    if (digitCount(inputNumber) > 6)
    {
        std::cout << "Wrong Input" << std::endl;
    }
    else
    {
        std::cout << changeDigitToWord(inputNumber, 5) << " ";
        std::cout << changeDigitToWord(inputNumber, 4) << " ";
        std::cout << changeDigitToWord(inputNumber, 3) << " ";
        std::cout << changeDigitToWord(inputNumber, 2) << " ";
        std::cout << changeDigitToWord(inputNumber, 1) << " ";
        std::cout << changeDigitToWord(inputNumber, 0) << std::endl;
    }

    return 0;
}