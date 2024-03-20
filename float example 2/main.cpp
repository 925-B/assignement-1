#include <stdio.h>



int main(void)
{
    float a = 0;
    while (a <= 100)
    {
        if (a > 98.6)
        {
            printf("%6.2f degrees F = %6.2f degrees C\n",
                   98.6, (98.6 - 32.0) * 5.0 / 9.0);
        }

    printf("%6.2f degrees F = %6.2f degrees C\n",
           a, (a - 32.0) * 5.0 / 9.0);
           a = a + 10;

    }
   return 0;
}
