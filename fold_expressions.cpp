// fold_expressions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// FoldExpressions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Project Requires Setting language to C++17
//
//https://www.youtube.com/watch?v=nhk8pF_SlTk

#include <iostream>

template <typename... T>
int sum(T... args)
{
	return (0 + ... + args);
}

template <typename... T>
auto sum2(T... args)
{
	return (args + ...);
}

template <typename... T>
auto div(T... args)
{
	return (args / ...);
}

template <typename... T>
auto avg(T... args)
{
	return (args + ...) / sizeof...(args);
}

int main()
{
	std::cout << sum(2, 8, 3, 5, 23, 3) << "\n";
	std::cout << sum2(2, 8, 3, 5, 23, 3) << "\n";
	std::cout << sum(2, 8, 3.3, 5, 23, 3) << "\n";
	std::cout << sum2(2, 8, 3.3, 5, 23, 3) << "\n";

	std::cout << div(3, 2, 1) << "\n";
	std::cout << div(3.0, 2.0, 1.0) << "\n";

	// std::cout << div(1, 2, 3) << "\n"; // causes division by zero error. I do not understand why.
	std::cout << div(1.0, 2.0, 3.0) << "\n";
	std::cout << avg(1.0, 2.0, 3.0) << "\n";
	std::cout << avg(1.0, 2.0, 3.5) << "\n";


	std::cin.get();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
