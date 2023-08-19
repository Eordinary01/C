#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    // int a, b , c; 
    // printf("Enter number a\n");
    // scanf("%d", &a);
    // printf("Enter number b\n");
    // scanf("%d", &b);
    // // printf("The sum is %d\n", a+b);
    // printf("Enter number c\n");
    // scanf("%d", &c);
    // printf("The sum is %d\n", a+b+c);
    // return 0 ;

    int a,b,c;
    printf("Enter 3 number for multiplication a\n");
    scanf("%d %d %d", &a, &b,&c);
    printf("Multiplication of %d and %d and %d is %d\n ", a,b,c,(a*b*c));
}
