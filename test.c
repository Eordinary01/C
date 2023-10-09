#include <stdio.h>

// int main()
// {
//     printf("%lu", sizeof(double)); 
//     return 0;
// }


// OPERATORS:-
//  Types  of operators in C
//  Arithmetic:- + ,- ,*,/,%
//  Relational:- ==, !=, >, <, >=,<=,   
//  Logical:- &&  , ||  , !
//  Bitwise:- 
//  Assignment:- = , +=, -=, *=, /= 
//  Operators.. 
  




int main()
{
    int n ,i; 
    printf("Enter the number you want multiplication table of \n");
    scanf("%d", &n);
    for(  i =1; i <= 10; ++i){
        printf("%d * %d = %d \n" , n , i ,n*i);
    }
    return 0;


}


// int main()
// {
//     int i;

//     for( i=0; i<=100; i++){
//         if( i % 2 != 0){
//             printf("%d\n",i);

//         }
//     }

//     return 0;
// }

// (i % 2==0 )


