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

int main()
{
	Array copySource = { 17, "Mamas 53 Empire!" };
	char copyDestination[17];
	printf("Source: %s ", copySource.array);
	ArrayCopy(copySource, copyDestination, 17);
	printf("Destination: %s\n", copyDestination);

	Array compare = { 17, copyDestination };
	printf("%s == %s ? %s", copySource.array, compare.array, ArrayCompare(copySource, compare) ? "true" : "false");
}
