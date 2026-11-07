#include <iostream>

int getDigit(const int number);
int sumOdddigits(const std::string cardNumber);
int sumEvendigits(const std::string cardNumber);

int main() {
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvendigits(cardNumber) + sumOdddigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid";
    } else {
        std::cout << cardNumber << " is not valid";
    }
    while(true);

    return 0;
}

int getDigit(const int number){
    return number % 10 + (number/10%10);
}
int sumOdddigits(const std::string cardNumber) {
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum+=getDigit(cardNumber[i] - '0');
    }

    return sum;
}
int sumEvendigits(const std::string cardNumber) {
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum+=getDigit((cardNumber[i] - '0')*2);
    }

    return sum;
}
