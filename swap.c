#include <iostream>

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 20, b = 30;

    // int *pa = &a, *pb = &b;

	swap(&a, &b);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}