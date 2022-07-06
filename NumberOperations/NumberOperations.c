#include <stdio.h>

int sqrt(int num) {
    int root = 1;
    while (root * root <= num) {
        root++;
    }
    return root - 1;
}

void add(int* pNum, int incBy) {
    *pNum += incBy;
}

int main()
{
    for (int i = 1; i < 100; i++)
	{
        printf("root of %d is %d\n", i, sqrt(i));
	}

    int number = 6;
    printf("%d + 60 = ", number);
    add(&number, 60);
    printf("%d\n", number);
}
