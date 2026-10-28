#include <iostream>

int main() {
    double temp;
    char unit;
    std::cout << "********* Temperature convertion *********\n";

    std::cout << "*      F = Fahrenheit, C = Celsius       *\n";
    std::cout << "*what unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "*enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
    } else if(unit == 'C' || unit == 'c') {
        std::cout << "*enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
    } else {
        std::cout << "*      Please enter in only C or F       *\n";
        std::cout << "******************************************\n";
        while (true);
    }
    std::cout << "******************************************\n";
    std::cout << "*Temperature is: " << temp << " " << unit << "                    *\n";
    std::cout << "******************************************\n";
    
    while (true);
}

//made by daniell291 25th october 2026