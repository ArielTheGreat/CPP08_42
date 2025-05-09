#ifndef SPAN_CPP
#define SPAN_CPP

#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<unsigned int> _container;
        unsigned int _limitNumberSize;
    public:
        //Orthodox canonical form
        Span();
        Span(unsigned int maxSize);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        class NotEnoughNumbers : public std::exception 
        {
            public:
				const char* what() const noexcept override {
					return "Not enough elements to calculate span!";
				}
        };

        class LimitReached : public std::exception 
        {
            public:
				const char* what() const noexcept override {
					return "Cannot add more elements, limit of container has been reached!";
				}
        };

        class RangeLimitSurpassed : public std::exception 
        {
            public:
				const char* what() const noexcept override {
					return "Operation not valid, since it will surpass the limit";
				}
        };
        
        void addNumber(unsigned int num);
        void addNumber(unsigned int begin, unsigned int end);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};

#endif