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

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void printArr(int* array, int length) {
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
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

    int toSwap = 42;
    printf("%d swaped with %d is ", number, toSwap);
    swap(&number, &toSwap);
    printf("%d, %d", number, toSwap);
    
    printf("\n");
    int arr[10] = { 0, 1, 2, 3, 4, 5, 7, 8, 9, 10 };
    printArr(&arr, 10);
}
