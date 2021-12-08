#include "main.hpp"

void task(int* arr, int* sum, int* count)
{
	if (!arr || !sum || !count)
		return;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (arr[i] > 0 && isEven(arr[i]))
		{
			*sum += arr[i];
			*count += 1;
			arr[i] = 0;
		}
	}
}

int main()
{
	srand(time(NULL));

	int a[ARRAY_SIZE] = { 0 };
	int sum = 0;
	int count = 0;

	initArr(a);
	printArr(a);
	task(a, &sum, &count);

	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Count: " << count << std::endl;
	printArr(a);

	return 0;
}