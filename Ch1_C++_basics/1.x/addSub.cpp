//
// Created by Tyler Clark on 8/23/20.
//
#include <iostream>

int main(int argc, char *argv[])
{
    int a{0},b{0};
    std::cout << "Enter an integer: ";
    std::cin >> a;
    std::cout << "Enter another integer: ";
    std::cin >> b;
    std::cout << a << " + " << b << " is "<< a+b << '\n';
    std::cout << a << " - " << b << " is "<< a-b;
}