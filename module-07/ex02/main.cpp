#include "Array.hpp"


int main()
{
    Array<int>* x;
    try {
        x = new Array<int>(5);
    } catch (int e) {
        delete x;
        std::cout << "The constructor of Array class failed\n";
        return (1);
    }
    Array<int>& rx = *x;
    try {
        for (int i = 0; i < 5; i++) {
            rx[i] = 20;
        }
        rx[2] = 35;
        std::cout << "Printing the array' values: \n";

        for (int i = 0; i < 5; i++) {
            std::cout << rx[i] << '\n';
        }

        rx[5] = 0;
    } catch (std::exception& e) {
        delete x;
        std::cout << "Exception caught: " << e.what() << '\n';
        return 1;
    }
    delete x;

    return 0;
}
