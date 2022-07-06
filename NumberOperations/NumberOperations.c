#include <stdio.h>

int sqrt(int num) {
    int root = 1;
    while (root * root <= num) {
        root++;
    }
    return root - 1;
}

int main()
{
    for (int i = 1; i < 100; i++)
	{
        printf("root of %d is %d\n", i, sqrt(i));
	}
}
