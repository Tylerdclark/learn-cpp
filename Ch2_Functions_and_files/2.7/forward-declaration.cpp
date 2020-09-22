#include <iostream>

using namespace std;

// can declare above, so compiler is aware of the function
int multNum(int num, int multiplier);

int main(int argc, const char** argv) {

    int number{multNum(5,4)};
    cout << number << "\n";
    
    return 0;
}
// then define below the details of the function
int multNum(int num, int multiplier)
{
    return num * multiplier;
}