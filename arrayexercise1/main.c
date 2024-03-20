#include <stdio.h>


int main()
{
   int a[5];
   int i;

   for (i = 0; i < 5; a[i++] = 2 * i + 1);

    printf("Array elements: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

     printf("\n");

     return 0;
}




