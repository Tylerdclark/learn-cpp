#include <iostream>

//
// Created by Tyler Clark on 8/8/20.
//
int main(int argc, char *argv[])
{
int x;  /* this variable does not automatically get initialized to 0. it will get whatever
        * value was previously stored at the memory location */

std::cout << x; // <-- undefined behavior

// note: if this is run in debug mode, it will likely initialize the variable
}