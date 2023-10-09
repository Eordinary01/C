#include<stdio.h>

int main()

{
    int i, n;

    printf("Enter the number of character \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("ok", i, n);
    }

    return 0;
}