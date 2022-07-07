#include <stdio.h>

struct Array {
	int length;
	char* array;
};
typedef struct Array Array;

void ArrayCopy(Array src, char* dst) {
	for (int i = 0; i < src.length; i++)
	{
		dst[i] = src.array[i];
	}
}



int main()
{
	Array copySource = { 17, "Mamas 53 Empire!" };
	char copyDestination[17];
	printf("Source: %s ", copySource.array);
	ArrayCopy(copySource, copyDestination, 17);
	printf("Destination: %s\n", copyDestination);
}
