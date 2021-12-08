#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
#include <ctime>

#define ARRAY_SIZE 25
#define ARRAY_VALUE_MIN -20
#define ARRAY_VALUE_MAX 30

void initArr(int* arr)
{
	if (!arr)
		return;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		arr[i] = rand() % ((ARRAY_VALUE_MAX + 1) - ARRAY_VALUE_MIN) + ARRAY_VALUE_MIN;
	}
}

void printArr(int* arr)
{
	if (!arr)
		return;

	std::cout << "[ ";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << std::setw(3) << arr[i];
		if (i < ARRAY_SIZE - 1)
		{
			std::cout << ", ";
		}
		else
		{
			std::cout << " ]" << std::endl;
		}
	}
}

bool isEven(int a)
{
	return !(a % 2);
}

#endif //MAIN_HPP
