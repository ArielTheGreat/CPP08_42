#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <stdexcept>
#include <sstream>
#include <string>

template <typename T>
int easyfind(T& container, int numberToBeFound) {
	for (const auto& element : container)
    {
		if (element == numberToBeFound)
        {
			return numberToBeFound;
		}
	}
	std::ostringstream oss;
    oss << "Element " << numberToBeFound << " not found";
    throw std::runtime_error(oss.str());
}

#endif

/*
    for (auto element : container)
    is a syntax sugar that use iterators internally:
    auto _begin = container.begin();
    auto _end = container.end();
    for (_begin != _end; _begin++)
    {
        auto element = _begin;
    }
*/