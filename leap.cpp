/*
Author: Ishraq Mahid
Course : CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1C
*/

#include <iostream>
#include <string>

bool leap(int year);

int main()
{
    int year;

    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << std::endl;

    if(leap(year)){
        std::cout << "Leap year" << std::endl;
    }
    else{
        std::cout << "Common year" << std::endl;
    }

    return year;
}

bool leap(int year)
{
    if(year % 4 != 0){
        return false;
    }
    else if(year % 100 != 0){
        return true;
    }
    else if(year % 400 == 0){
        return true;
    }
    return false;
}