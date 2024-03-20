#include <stdio.h>



int main(void)
{
    int fahr, celsius;
    int start, end, increment;

    printf("Enter the starting temperature in Fahrenheit: ");
    scanf("%d", &start);

    printf("Enter the ending temperature in Fahrenheit: ");
    scanf("%d", &end);

    printf("Enter the increment value: ");
    scanf("%d", &increment);

    printf("\nFahrenheit Celsius\n");
    for (fahr = start; fahr <= end; fahr += increment)
    {
      celsius = 5 * (fahr - 32) / 9;
       printf("%d\t\t%6d\n", fahr, celsius);
       }
     return 0;
}
