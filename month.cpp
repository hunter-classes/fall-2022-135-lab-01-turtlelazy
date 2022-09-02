/*
Author: Ishraq Mahid
Course : CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1D
*/

#include <iostream>
#include <string>

int days(int year, int month);
bool leap(int year);

int main()
{
    int year;
    int month;

    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << std::endl;

    std::cout << "Enter month: ";
    std::cin >> month;
    std::cout << std::endl;


    std::cout << days(year,month) << " days" << std::endl;

    return days(year, month);
}

bool leap(int year)
{
    if (year % 4 != 0)
    {
        return false;
    }
    else if (year % 100 != 0)
    {
        return true;
    }
    else if (year % 400 == 0)
    {
        return true;
    }
    return false;
}

int days(int year,int month)
{
    if(month != 2){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            return 31;
        }
        else{
            return 30;
        }
    }
    else{
        if(leap(year)){
            return 29;
        }
        else{
            return 28;
        }
    }
    
    return 0;
}

