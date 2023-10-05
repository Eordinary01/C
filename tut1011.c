#include<stdio.h>

int main(){

    int n,i;
    int isPrime=1;

    printf("Enter the number yow want check whether it is prime or not \n");
    scanf("%d", &n);
    for ( i=2; i*i<n; i++){
        if(n%i==0){
            isPrime=0;
        }
    }
    if(isPrime){
        printf("The number %d is prime\n", n);
    }
    else{
        printf("The number %d is not prime\n",n);
    }




    return 0 ;
}