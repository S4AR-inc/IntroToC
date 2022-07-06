#include <stdio.h>

int Fibonachi(int location) {
	int a = 1;
	int b = 0;
	for (int i = 0; i < location - 1; i++){
		int temp = a;
		a = a + b;
		b = temp;
	}
	return a;
}

int ReverseFibonachi(int number) {
	int location = 1;
	int a = 1;
	int b = 0;
	while (a < number){
		int temp = a;
		a = a + b;
		b = temp;
		location++;
	}
	if (a == number) {
		return location;
	} else {
		return -1;
	}
}

int main()
{
	for (int i = 1; i < 11; i++)
	{
		int fibonachi = Fibonachi(i);
		printf("(%d, %d), ", ReverseFibonachi(fibonachi), fibonachi);
	}
}
