
#include <iostream>
using namespace std;

void returnsNothing()
{
    cout << "I'm a function that returns nothing!\n";
}

int getValueFromUser()
{
    int val{};
    cout << "Please enter a number!\n:";
    cin >> val;
    return val;
}

int main(int argc, char const *argv[])
{
    int output{getValueFromUser()};
    cout << "Your number doubled is: " <<  output * 2 << "\n";
    returnsNothing();
    return 0;
}
