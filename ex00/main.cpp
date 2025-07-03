#include "easyfind.hpp"

/*
| Container Type        | Description                           | Examples                      |
|-----------------------|---------------------------------------|-------------------------------|
| Sequence Containers   | Linear order, dynamic or fixed        | vector, list, deque, array    |
| Associative Containers| Sorted key-based storage              | set, map                      |
| Unordered Containers  | Hash-based, unordered keys            | unordered_set, unordered_map  |
| Container Adapters    | Restricted interface (stack, queue)   | stack, queue, priority_queue  |

Sequence Containers:
+---------+------------------------------+-------------------------------+
| Type    | Characteristics              | Use Case                      |
+---------+------------------------------+-------------------------------+
| vector  | Dynamic array                | Fast random access, append    |
|         | Fast access O(1)             | Good for mostly adding at end |
+---------+------------------------------+-------------------------------+
| list    | Doubly linked list           | Fast insert/remove anywhere   |
|         | No random access             | Use if frequent mid-list ops  |
+---------+------------------------------+-------------------------------+
| deque   | Double-ended queue           | Fast push/pop front & back    |
|         | Fast random access           | Use if you need both ends ops |
+---------+------------------------------+-------------------------------+
| array   | Fixed size, stack allocated  | Max performance, fixed size   |
|         | Fast random access           | Size known at compile-time    |
+---------+------------------------------+-------------------------------+
*/

int main() {
    // Test with std::vector
    std::vector<int> vec = {10, 20, 30};
    int vecN = 10;
    try {
        std::vector<int>::iterator it = easyfind(vec, vecN);
        std::cout << "Value " << vecN << " found at position: " << std::distance(vec.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    // Test with std::list
    std::list<int> lst = {43, 42, 420};
    int lstN = 42;
    try {
        std::list<int>::iterator it = easyfind(lst, lstN);
        std::cout << "Value " << lstN << " found at position: " << std::distance(lst.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    // Test with std::array
    std::array<int, 3> arr = {7, 8, 9};
    int arrN = 9;
    try {
        std::array<int, 3>::iterator it = easyfind(arr, arrN);
        std::cout << "Value " << arrN << " found at position: " << std::distance(arr.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    // Test with std::deque
    std::deque<int> deq = {40, 50, 60};
    int deqN = 40;
    try {
        std::deque<int>::iterator it = easyfind(deq, deqN);
        std::cout << "Value " << deqN << " found at position: " << std::distance(deq.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
