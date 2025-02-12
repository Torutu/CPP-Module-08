#include <iostream>   // Include the standard input/output library for console I/O
#include "MutantStack.hpp" // Include the MutantStack class definition
#include <list>       // Include the list container (not used in this code, but often used for comparison)

int main() {
    // Create an instance of MutantStack that holds integers
    MutantStack<int> mstack;

    // Push the value 5 onto the stack
    mstack.push(5);

    // Push the value 17 onto the stack
    mstack.push(17);

    // Print the top element of the stack (which is 17)
    std::cout << mstack.top() << std::endl;

    // Remove the top element from the stack (17 is removed)
    mstack.pop();

    // Print the size of the stack (which is now 1, since only 5 remains)
    std::cout << mstack.size() << std::endl;

    // Push the value 3 onto the stack
    mstack.push(3);

    // Push the value 5 onto the stack
    mstack.push(5);

    // Push the value 737 onto the stack
    mstack.push(737);

    // Push the value 0 onto the stack
    mstack.push(0);

    // Create an iterator pointing to the beginning of the stack
    MutantStack<int>::iterator it = mstack.begin();

    // Create an iterator pointing to the end of the stack
    MutantStack<int>::iterator ite = mstack.end();

    // Increment the iterator (moves it to the next element)
    ++it;

    // Decrement the iterator (moves it back to the previous element)
    --it;

    // Loop through the stack using the iterators
    while (it != ite) {
        // Print the current element pointed to by the iterator
        std::cout << *it << std::endl;

        // Move the iterator to the next element
        ++it;
    }

    // Create a standard stack<int> and initialize it with the MutantStack
    // This demonstrates that MutantStack can be used like a regular stack
    std::stack<int> s(mstack);

    // End of the program
    return 0;
}