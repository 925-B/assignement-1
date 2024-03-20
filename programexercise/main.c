#include <stdio.h>


int main(void)
{
    float fahr, celsius;
    int start, end, increment;

    printf("Enter the starting temperature in Fahrenheit: ");
    scanf("%d", &start);

    printf("Enter the ending temperature in Fahrenheit: ");
    scanf("%d", &end);

    printf("Enter the increment value: ");
    scanf("%d", &increment);

    printf("Conversion of Fahrenheit to Celsius\n");
    for (fahr = start; fahr <= end; fahr += increment)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);

        printf("%6.2f\t\t%6.2f\n", fahr, celsius);
    }
    return 0;
}




