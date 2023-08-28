#include <stdio.h>

int main()
{
    int perimeter, side;
     printf("Enter the length of the side of the square \n ");
    scanf("%d", & side);
    perimeter = 4 * side; 
    printf("Perimeter of the square: %d \n",perimeter);

    return 0;
}