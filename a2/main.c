#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10


void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}
int main()
{
    int numbers[SIZE];
    int i;

    srand(time(NULL));

    printf("Random numbers:\n");
    for (i = 0; i < SIZE; i++)
    {
        numbers[i] = rand() % 100;

        printf("%d", numbers[i]);
    }
    sort(numbers, SIZE);

    printf("\n\nSorted numbers:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", numbers[i]);
    }
     return 0;
}
