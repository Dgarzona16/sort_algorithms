#include <iostream>
#include <random>
#include "Sorting.hpp"
#include "Objects.hpp"

//create a menu for the user to choose which sorting algorithm to use
void menu();
//create a function to generate a random size for the array
int randomSize();
//


int main() {
    car newCar;
    std::cout << newCar << std::endl;
    //menu();
    return 0;
}

int randomInt(){
    srand(static_cast<unsigned>(time(nullptr)));
    return rand() % 100;
}

void menu(){
    short int option;

    std::cout << "Welcome to the sorting algorithm comparison program!" << std::endl;

    do {
        std::cout << "Please choose an option from the menu below:" << std::endl;
        std::cout << "1. Selection Sort" << std::endl;
        std::cout << "2. Bubble Sort" << std::endl;
        std::cout << "3. Insertion Sort" << std::endl;
        std::cout << "4. Merge Sort" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Option: ";
        std::cin >> option;

        //pass the option to the switch statement

    } while (option < 0);
}