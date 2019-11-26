#include <iostream>
#include <cstdlib>

template <class T>
void swapValues(T& variable1, T& variable2)
{
	T temp;

	temp = variable1;
	variable1 = variable2;
	variable2 = temp;
}

int main()
{
	int v1, v2;
	char c1, c2;

	std::cout << "Enter int value1:";
	std::cin >> v1;
	std::cout << "Enter int value2:";
	std::cin >> v2;
	std::cout << "Unswapped: " << v1 << " " << v2 << std::endl;
	swapValues(v1, v2);
	std::cout << "Swapped: " << v1 << " " << v2 << std::endl;

	std::cout << "Enter char c1:";
	std::cin >> c1;
	std::cout << "Enter int c2:";
	std::cin >> c2;
	std::cout << "Unswapped: " << c1 << " " << c2 << std::endl;
	swapValues(c1, c2);
	std::cout << "Swapped: " << c1 << " " << c2 << std::endl;

	return (0);
}
