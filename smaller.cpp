/*
Author: Ishraq Mahid
Course : CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1A
*/

#include <iostream>
#include <string>

int smaller(int a, int b);

int main()
{
    int first;
    int second;

    std::cout << "Enter the first number: ";
    std::cin >> first;
    std::cout<< std::endl;

    std::cout << "Enter the second number: ";
    std::cin >> second;
    std::cout << std::endl;

    int result = smaller(first,second);

    std::cout << "The smaller of the two is " << result << std::endl;

    return result;
}

int smaller(int a, int b)
{
    if(a > b){
        return b;
    }
    else{
        return a;
    }

    return 0;
}