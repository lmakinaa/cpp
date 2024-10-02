#include "Span.hpp"

// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }

int main()
{
    // std::srand(std::time(NULL));
    try {
        Span sp = Span(15000);
        
        sp.addRandomNumberRange(15000);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        std::cout << "\nSecond test:\n\n";

        int arr[] = {0,9,19,-30,25};
        Span sp1 = Span(15);
        sp1.addNumberRange(arr, arr + (sizeof(arr) / sizeof(int)));
        sp1.displayNumbers();
        std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp1.longestSpan() << std::endl;

    } catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}