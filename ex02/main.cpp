#include "MutantStack.hpp"

int main()
{
	{	MutantStack<int> mstack;

		std::cout << "MutantStack testing" << std::endl;

		std::cout << "Pushing 5." << std::endl;
		mstack.push(5);
		std::cout << "Pushing 17." << std::endl;
		mstack.push(17);

		std::cout << "Printing top()" << std::endl;
		std::cout << mstack.top() << std::endl;

		std::cout << "Applying pop():" << std::endl;
		mstack.pop();

		std::cout << "Printing top()" << std::endl;
		std::cout << mstack.top() << std::endl;

		std::cout << "Printing size()" << std::endl;
		std::cout << mstack.size() << std::endl;

		std::cout << "Pushing 3." << std::endl;
		mstack.push(3);

		std::cout << "Pushing 5." << std::endl;
		mstack.push(5);

		std::cout << "Pushing 737." << std::endl;
		mstack.push(737);

		std::cout << "Pushing 0." << std::endl;
		mstack.push(0);

        for (auto it = mstack.begin(); it != mstack.end(); ++it) {
            std::cout << *it << std::endl;
        }
		std::stack<int> s(mstack);
	}

	std::cout << std::endl;

	{
		std::list<int> mylist;

		std::cout << "List testing" << std::endl;

		std::cout << "Pushing 5." << std::endl;
		mylist.push_back(5);
		std::cout << "Pushing 17." << std::endl;
		mylist.push_back(17);

		std::cout << "Printing top()" << std::endl;
		std::cout << mylist.back() << std::endl;

		std::cout << "Applying pop():" << std::endl;
		mylist.pop_back();

		std::cout << "Printing top()" << std::endl;
		std::cout << mylist.back() << std::endl;

		std::cout << "Printing size()" << std::endl;
		std::cout << mylist.size() << std::endl;

		std::cout << "Pushing 3." << std::endl;
		mylist.push_back(3);

		std::cout << "Pushing 5." << std::endl;
		mylist.push_back(5);

		std::cout << "Pushing 737." << std::endl;
		mylist.push_back(737);

		std::cout << "Pushing 0." << std::endl;
		mylist.push_back(0);

		for (std::list<int>::iterator it = mylist.begin();it != mylist.end(); ++it)
		{
			std::cout << *it << std::endl;
		}
	}
	return 0;
}