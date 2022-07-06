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

void FillFibonachi(int* array, int length) {
	int a = 1;
	int b = 0;
	for (int i = 0; i < length; i++){
		array[i] = a;
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
		int fibonachi = Fibonachi(i);
		printf("(%d, %d), ", ReverseFibonachi(fibonachi), fibonachi);
	}
	printf("\n");
	int fibo[10];
	FillFibonachi(&fibo, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", fibo[i]);
	}

}
