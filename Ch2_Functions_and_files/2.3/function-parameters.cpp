#include <iostream>

using namespace std;

int getValue()
{
    cout << "Number?\n:";
    int val{};
    cin >> val;
    return val;
}

void printDouble(int value)
{
    cout << value << " Doubled is: " << value * 2 << "\n";
}

void printMultiply(int first, int second)
{
    cout << first << " * " << second << ": " << first * second << "\n";
}

// void a()
// {
//     cout << "I'm a()\n";
// }

// void b()
// {
//     cout << "I'm b()\n";
// }

// template<typename Function>

// void callsTwoVariables(Function first, Function second)
// {
//     first();
//     second();
// }

int main(int argc, char const *argv[])
{
    printDouble(getValue());
    printMultiply(getValue(), getValue());
    // callsTwoVariables(a(), b());
    return 0;
}
