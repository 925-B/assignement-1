#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[20];
}
Record;
int compareByID(const void *a, const void *b)
{
    Record *recordA = (Record *)a;
    Record *recordB = (Record *)b;
    return (recordA->id - recordB->id);
}
int main()
{
    int i = 5;
    float f = 2.5;
    char c = 'A';

    int sum = i + c;
    printf("Sum of int and char (implicit typecasting): %d\n", sum);

    int product = i * (int)f;
    printf("Product of int and float (explicit typecasting): %d\n", product);

    int result = i + 3 * 4;
    printf("Result without parentheses: %d\n", result);

    result = (i + 3) * 4;
    printf("Result with parentheses: %d\n", result);

    Record records[5] =
    {
        {3, "Alice"},
        {1, "Bob"},
        {5, "Charlie"},
        {4, "David"},
        {2, "Eve"},
    };

    qsort(records, 5, sizeof(Record), compareByID);

    printf("Sorted records by ID:\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d: %s\n", records[j].id, records[j].name);
    }

   return 0;
}























