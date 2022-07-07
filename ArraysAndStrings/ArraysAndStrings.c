#include <stdio.h>

void ArrayCopy(char* src, char* dst, int length) {
	for (int i = 0; i < length; i++)
	{
		dst[i] = src[i];
	}
}

int main()
{
	char* copySource = "Mamas 53 Empire!";
	char copyDestination[17];
	printf("Source: %s ", copySource);
	ArrayCopy(copySource, copyDestination, 17);
	printf("Destination: %s\n", copyDestination);
}
