# include <iostream>

// Every cpp program needs a main
int main() {
    std::cout << "Enter an integer: ";

    int num{ 0 }; //define an integer
    std::cin >> num;

    std::cout << "That number doubled is: " << num * 2 << '\n';
    return 0;
}