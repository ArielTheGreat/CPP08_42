#ifndef SPAN_CPP
#define SPAN_CPP

#include <iostream>

class Span
{
    private:

    public:
        //Orthodox canonical form
        Span();
        Span(unsigned int maxSize);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        
        void addNumber(unsigned int num);
        void addNumber(unsigned int begin, unsigned int end);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};

#endif