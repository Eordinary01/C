#include <stdio.h>

int main(){
    int n,i=0,j;
    int rem=0;
    int a[10];

    printf("Input the decimal number to change to binary \n");
    scanf("%d", &n);
    while(n){
        rem = n%2;
        n = n/2;
        a[i] =  rem; 
        i++;
    }
    for(j =i-1; j>=0; j--){
        printf("%d", a[j]);
    }
    return 0;

}