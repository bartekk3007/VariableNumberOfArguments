#include <stdio.h>
#include <stdarg.h>

int sum(int n, ...)
{
	int sum = 0;

	va_list ptr;
	va_start(ptr, n);
	va_list ptr2;
	va_copy(ptr2, ptr);

	for (int i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	for (int i = 0; i < n; i++)
	{
		sum += va_arg(ptr2, int);
	}

	va_end(ptr);
	va_end(ptr2);

	return sum;
}

int main(void)
{
	int result = sum(5, 1, 2, 3, 4, 5);
	printf("%d\n", result);

	int i = sizeof(int);
	int d = sizeof(float);

	return 0;
}