#include "easyfind.hpp"

int main()
{
    std::vector<int> vec = {1, 5, 3, 6, 8};
    try {
		int foundVec = easyfind(vec, 3);
		std::cout << "Vector: " << foundVec << std::endl;

		foundVec = easyfind(vec, 6);
		std::cout << "Vector: " << foundVec << std::endl;

		foundVec = easyfind(vec, 8);
		std::cout << "Vector: " << foundVec << std::endl;

	} catch (const std::runtime_error& e) {
		std::cout << "Error (vector): " << e.what() << std::endl;
	}


    std::list<int> lst = {10, 20, 30};
    try {
		int foundLst = easyfind(lst, 20);
		std::cout << "List: " << foundLst << std::endl;

		foundLst = easyfind(lst,  30);
		std::cout << "List: " << foundLst << std::endl;

		foundLst = easyfind(lst,  8);
		std::cout << "List: " << foundLst << std::endl;

	} catch (const std::runtime_error& e) {
		std::cout << "Error (list): " << e.what() << std::endl;
	}

    std::set<int> s = {100, 200, 300};
    try {
		int foundSet = easyfind(s, 100);
		std::cout << "List: " << foundSet << std::endl;

		foundSet = easyfind(s,  200);
		std::cout << "List: " << foundSet << std::endl;

		foundSet = easyfind(s,  70);
		std::cout << "List: " << foundSet << std::endl;

	} catch (const std::runtime_error& e) {
		std::cout << "Error (list): " << e.what() << std::endl;
	}

    return (0);
}