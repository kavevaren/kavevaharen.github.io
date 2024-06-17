#include <iostream>
#include <cstdlib>
#include <ctime>

bool randomBool() {
    return std::rand() % 2;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));

    bool value = randomBool();
    std::cout << std::boolalpha << value << std::endl;

    return 0;
}