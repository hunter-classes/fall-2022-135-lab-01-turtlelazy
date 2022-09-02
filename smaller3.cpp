/*
Author: Ishraq Mahid
Course : CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1B
*/

#include <iostream>
#include <string>

int smaller(int a, int b, int c);

int main()
{
    int first;
    int second;
    int third;

    std::cout << "Enter the first number: ";
    std::cin >> first;
    std::cout << std::endl;

    std::cout << "Enter the second number: ";
    std::cin >> second;
    std::cout << std::endl;

    std::cout << "Enter the third number: ";
    std::cin >> third;
    std::cout << std::endl;

    int result = smaller(first, second,third);

    std::cout << "The smaller of the three is " << result << std::endl;

    return result;
}

int smaller(int a, int b, int c)
{
    if (a > b)
    {
        if(b > c){
            return c;
        }
        else{
            return b;
        }
    }

    else
    {
        if (a > c)
        {
            return c;
        }
        else
        {
            return a;
        }
    }

    return 0;
}