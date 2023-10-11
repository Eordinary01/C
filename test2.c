#include<stdio.h>

int main()

{
    int  n,Sum=0;

    printf("Enter the  natural number\n ");
    scanf("%d", &n);

    Sum = (n*n + n)/2;
    printf("Sum of first %d natural number is: %d",n,Sum);


    return 0;
}