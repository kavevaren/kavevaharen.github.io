#include <iostream>


int main(){
    std::cout << "You want to change Farenheit or Celcius";
    int option;
    std::cin >> option ;

    if (option == 1) {
        std::cout << "Answer your degree : ";
        double farenheit;
        std::cin >> farenheit;
        double data=farenheit-32;
        std::cout << "This is your converted degree " << data*5/9;
    }


    else {
        std::cout << "Answer your degree : ";
        double celcius;
        std::cin >> celcius;
        double data=celcius*9/5;
        std::cout << "This is your converted celcius degree " << data+32;
    }


    return 0;
}
