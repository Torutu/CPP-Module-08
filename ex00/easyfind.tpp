#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <sstream> // For std::ostringstream
#include <stdexcept> // For std::runtime_error

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        std::ostringstream oss;
        oss << "Value " << value << " not found in container";
        throw std::runtime_error(oss.str());
    }
    return it;
}

#endif