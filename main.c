#include <stdio.h>

// int main()

// {
//     int i, n;

//     printf("Enter the number of character \n");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("ok", i, n);
//     }

//     return 0;
// } 



int main(){
    int n, reverse=0,remainder,original;
    printf("Enter a number\n");
    scanf("%d",&n);
    original=n;
    while(n !=0){

    remainder = n%10;
    reverse = reverse * 10 + remainder;
    n /= 10;
    }
    printf("Reverse number is:%d\n", reverse);

    if(original==reverse){
        printf("The inputed %d is Palindrome",original);
    }
    else{
        printf("The inputed %d is not Palindrome  ", original);
    }

    return 0;
}



