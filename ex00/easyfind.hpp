#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> // For std::find
#include <stdexcept> // For std::exception

template <typename T>
typename T::iterator easyfind(T& container, int value);

#include "easyfind.tpp" // Include the implementation if using .tpp

#endif