#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    // Test with std::vector
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    int N = 10;
    try {
        std::vector<int>::iterator it = easyfind(vec, N);
        std::cout << "Value " << N << " found at position: " << std::distance(vec.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    // Test with std::list
    std::list<int> lst;
    lst.push_back(100);
    lst.push_back(200);
    lst.push_back(300);

    int Num = 42;

    try {
        std::list<int>::iterator it = easyfind(lst, Num);
        std::cout << "Value " << Num << " found at position: " << std::distance(lst.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}