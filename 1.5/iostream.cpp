//
// Created by Tyler Clark on 8/6/20.
//
#include <iostream> // <-- All about it

int main(){

    std::cout << "inserting the string into the predefined variable std::cout \n";
    std::cout << "printing with std::endl redundantly flushes" << std::endl;
    std::cout << "Therefore using '\\n' is more efficient. \n";

    std::string userInput{}; //initialize the string
    std::cout << "Enter your name ";
    std::cin >> userInput;
    std::cout << "I got your name thanks to std::cin, " << userInput << '.';

    return 0; //if not explicated stated, will return 0
}