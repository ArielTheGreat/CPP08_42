#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>


template <typename T>
class MutantStack : public std::stack<T> {
    public:
        using iterator = typename std::stack<T>::container_type::iterator;

        MutantStack() = default;
        MutantStack(const MutantStack& other) : std::stack<T>(other) {}
        MutantStack& operator=(const MutantStack& other) {
            if (this != &other)
                std::stack<T>::operator=(other);
            return (*this);
        };
        ~MutantStack() = default;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};

#endif