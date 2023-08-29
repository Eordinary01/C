#include <stdio.h>
#include <conio.h>
#include <math.h>

/*
#define PI 3.14f

int main() 
{
      int result,l,b,aot,h,x,y,z,perimeter,side,area,radius;

    printf("Enter 0 if you have to find the area and peimeter of Square\n");
    printf("Enter 1 if you have to find the area and perimeter of rectangle\n");
    printf("Enter 2 if you have to find the area and perimeter of triangle\n");
    printf("Enter 3 if you have to find the area and perimeter of circle\n");
    printf("Please enter the number you want area and perimeter of \n");
    scanf("%d",&result);
    printf("You have entered %d as you want to find the area and perimeter of that shape \n" , result);
    
    if(result==0) {
    printf("Enter the length of the side of the square \n ");
    scanf("%d", & side);
    perimeter = 4 * side; 
    printf("Perimeter of the square:  %d\n",perimeter);

    area = side * side;
    printf("Area of the square: %d", area);
    }
    else if(result==1){
        printf("Enter the length and breadth of rectangle\n ");
        scanf("%d %d", &l,&b);
        perimeter =2* (l*b);
        printf("Perimeter of rectangle: %d \n", perimeter);

        area = l*b;
        printf("Area of the rectangle:%d \n", area);
    }
    else if(result==2){
        printf("Enter 3 sides of Triangle\n");
        scanf("%d %d %d", &x, &y,&z);
        perimeter = x+y+z;
        printf("Perimeter of Triangle: %d\n", perimeter);

        printf("Enter Base and Height of Triangle\n");
        scanf("%d %d", &b,&h);
        aot = (b*h/2);
        printf("Area of Triangle: %d\n", aot);
    }
    else if(result==3){
        printf("Enter the radius of the circle \n");
        scanf("%d", &radius);
        perimeter =  2 * PI * radius;
        printf("Perimeter of the Circle: %d\n",perimeter);

        area = PI * radius * radius;
        printf("Area of the Circle: %d\n", area);
        
    }
    else{
        printf("Select the valid number for output");
    }

    return 0;


}
*/

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("The age is 3");
        break;
    case 13:
        printf("The age is 13");
        break;
    case 23:
        printf("The age is 23");
        break;
    
    default:
    printf("Age is not 3,13 and 23");
        break;
    }

    return 0;
}

    
