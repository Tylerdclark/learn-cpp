#include <iostream>

int add_mult(int arg1, int arg2)
{
    return (arg1 + arg2) * (arg1 +arg2);
}
// argc is the number of arguments to follow and argv[] is the vector that
// would hold the arguments if this would be a commandline program
int main(int argc, char const *argv[])
{
    std::cout << add_mult(4,4) << std::endl;
    int value1{0}; //direct brace initialization to zero
    int value2(4.5); //direct initialization, will truncate to 4
    /* int value3{5.5}; direct brace initialization, will not
     compile; no narrowing conversions allowed*/
    int value4{5}; // this is fine

    std::cout << value1 << std::endl;
    std::cout << value2 << std::endl;
    std::cout << value4 << std::endl;
}
