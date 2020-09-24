#include <iostream> //replaces this with the contents of iostream
//below is not recommended as it can be done better
#define MY_NAME "Tyler" //replaced the left with the right
//below is a way to create conditional compilation
#define YES_PRINT

int main(int argc, char const *argv[])
{
#ifdef YES_PRINT //checks before compilation
    std::cout << "My name is " << MY_NAME << '\n'; //replaces before compilation
#endif // YES_PRINT

#if 0 //a way to comment out a bunch of code
    std::cout << "this will never be printed"
#endif
    return 0;
}
