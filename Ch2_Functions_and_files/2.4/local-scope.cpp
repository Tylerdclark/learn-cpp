#include <iostream>
using namespace std;

void scopeExample(int a, int b)
{//a and b's scope begins here
    cout << "a has the value: " << a << "\n"; 
    cout << "b has the value: " << b << "\n"; 
    cout << "in the method's scope\n\n";
}//a and b's scope ends here

int main(int argc, char const *argv[])
{
    int a{3}; 
    int b{4};

    scopeExample(1,2);
    cout << "a has the value: " << a << "\n"; 
    cout << "b has the value: " << b << "\n"; 
    cout << "in the main's scope\n";
    return 0;
}
