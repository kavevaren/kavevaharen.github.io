#include <iostream>


int main() {
    int number1;
    int number2;
    int sum;

    std::cout<<"Enter your first number" "=";
    std::cin>> number1;
    std::cout<<"Enter your second number";
    std::cin >>  number2;

    sum=number1+number2;

    if (sum/3 == 1 ) {
        std::cout<<"Your number is not valid";
    }
    else;
    std::cout<<"This is your valid value " << sum;
    return 0;
    }

