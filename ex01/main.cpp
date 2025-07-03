#include "Span.hpp"

int main()
{
Span sp = Span(5);
try {
    sp.addNumber(4);
    sp.addNumber(20);
    sp.addNumber(42);
    sp.addNumber(40);
    sp.addNumber(0);
    std::cout << "Shortest:" << sp.shortestSpan() << std::endl;
    std::cout << "Longest :" << sp.longestSpan() << std::endl;
} catch (const Span::FullException& e){
    std::cerr << "Caught exception :" << e.what() << std::endl;
} catch (const Span::NoSpanException& e){
    std::cerr << "Caught exception :" << e.what() << std::endl;
}
return 0;
}
