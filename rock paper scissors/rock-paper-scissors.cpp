#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    do{
        player = getUserChoice();
        std::cout << "your choice: ";
        showChoice(player);

        computer = getComputerChoice();
        std::cout << "computers choice: ";
        showChoice(computer);

        std::cout << "\033[2J\033[3J\033[H";
        std::cout << "********************\n"; 
        chooseWinner(player, computer);
        std::cout << "********************\n";
    }while(true);
}

char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors!\n";
    do{
        std::cout << "choose one of the following\n";
        std::cout << "********************\n";
        std::cout << "'r' for rock\n'p' for paper\n's' for scissors\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}

void showChoice(char choice){
    switch(choice) {
        case 'r': std::cout << "Rock\n";
                break;
        case 'p': std::cout << "Paper\n";
                break;
        case 's': std::cout << "Scissors\n";
                break;
    }
}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << "It's a tie!\n";
                    } else if (computer == 'p'){
                        std::cout << "You lose\n";
                    } else {
                        std::cout << "You win!\n";
                    }
                    break;
        case 'p':   if(computer == 'p'){
                        std::cout << "It's a tie!\n";
                    } else if (computer == 's'){
                        std::cout << "You lose\n";
                    } else {
                        std::cout << "You win!\n";
                    }
                    break;
        case 's':   if(computer == 's'){
                        std::cout << "It's a tie!\n";
                    } else if (computer == 'r'){
                        std::cout << "You lose\n";
                    } else {
                        std::cout << "You win!\n";
                    }
                    break;
    }
}