#include <stdio.h>


int main(void)
{
   float pounds, kilograms;
    int start, end, increment;

    printf("Enter the starting weight in pounds: ");
    scanf("%d", &start);

    printf("Enter the ending weight in pounds: ");
    scanf("%d", &end);

    printf("Enter the increment value: ");
    scanf("%d", &increment);

    printf("Conversion of pounds to kilograms\n");
    for (pounds = start; pounds <= end; pounds += increment)
    {
        kilograms = pounds * 0.453592;

        printf("%6.2f\t\t%6.2f\n", pounds, kilograms);
    }
    return 0;
}







