#include <stdio.h>
#include <stdbool.h>

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

bool ArrayCompare(Array first, Array second) {
	if (first.length != second.length) {
		return false;
	}
	for (int i = 0; i < first.length; i++)
	{
		if (first.array[i] != second.array[i]) {
			return false;
		}
	}
	return true;
}

void ArrayFill(Array arr, char value) {
	for (int i = 0; i < arr.length; i++)
	{
		arr.array[i] = value;
	}
}

int main()
{
	Array copySource = { 17, "Mamas 53 Empire!" };
	char copyDestination[17];
	printf("Source: %s ", copySource.array);
	ArrayCopy(copySource, copyDestination);
	printf("Destination: %s\n", copyDestination);

	Array compare = { 17, copyDestination };
	printf("%s == %s ? %s\n", copySource.array, compare.array, ArrayCompare(copySource, compare) ? "true" : "false");

	char toFill[7];
	toFill[6] = 0;
	Array fillArray = { 6, toFill };
	ArrayFill(fillArray, '6');
	printf("filled array: %s\n", toFill);
}
