#include "Span.hpp"

Span::Span() : _limitNumberSize(100)
{

}

Span::Span(unsigned int maximumSize) : _limitNumberSize(maximumSize)
{

}
Span::Span(const Span& other) :  _container(other._container), _limitNumberSize(other._limitNumberSize)
{

}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
	{
		_limitNumberSize = other._limitNumberSize;
		_container = other._container;
	}
	return (*this);
}

Span::~Span(){}

void Span::addNumber(unsigned int num)
{
    if (_container.size() >= _limitNumberSize)
        throw LimitReached();
    _container.push_back(num);
}

void Span::addNumber(unsigned int begin, unsigned int end)
{
    if (begin >= end || _container.size() + (end - begin) > _limitNumberSize)
		throw RangeLimitSurpassed();

    for (unsigned int i = begin; i < end; ++i) {
		_container.push_back(i);
	}
}
unsigned int Span::shortestSpan()
{
    unsigned int _shortestSpan = std::numeric_limits<unsigned int>::max();
    if (_container.size() <= 2)
		throw NotEnoughNumbers();

    std::sort(_container.begin(), _container.end());

    for (unsigned int i = 1; i < _container.size(); i++)
	{
		unsigned int span = _container[i] - _container[i - 1];
		if (span < _shortestSpan)
            _shortestSpan = span;
	}
	return (_shortestSpan);
}
unsigned int Span::longestSpan()
{
    if (_container.size() <= 2)
		throw NotEnoughNumbers();

    std::sort(_container.begin(), _container.end());

    unsigned int maxElem = *std::max_element(_container.begin(), _container.end());
    unsigned int minElem = *std::min_element(_container.begin(), _container.end());

    return (maxElem - minElem);
}