#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> // For std::find
#include <stdexcept> // For std::exception
#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <iterator> // for std::distance


template <typename T>
typename T::iterator easyfind(T& container, int value);

#include "easyfind.tpp" // Include the implementation if using .tpp

#endif