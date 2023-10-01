#include <stdio.h>

int main()
{
    int i, number, new = 1;
    printf("Enter a number \n");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        new = new *i;
    }
    printf("Factorial of %d is : %d\n", number, new);
    return 0;
}