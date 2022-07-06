#include <stdio.h>

int Fibonachi(int location) {
	int a = 1;
	int b = 0;
	for (int i = 0; i < location - 1; i++)
	{
		int temp = a;
		a = a + b;
		b = temp;
	}
	return a;
}

int main()
{
	for (int i = 1; i < 11; i++)
	{
		printf("%d, ", Fibonachi(i));
	}
}
