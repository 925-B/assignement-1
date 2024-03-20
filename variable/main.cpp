#include <stdio.h>

typedef int boolean;
typedef float real;

#define TRUE 1
#define FALSE 0

int main(void)
{
    boolean isready;
    real pi;

    isready = TRUE;
    pi = 3.14159;

    printf("isready: %d\n", isready);
    printf("Value of pi: %f\n", pi);

    return 0;
}
