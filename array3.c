#include<stdio.h>

int main(){
    int arr[100];
    int i,size,num,position,n;

    printf("Enter the size of the array:");
    scanf("%d", &size);  
    printf("Enter the elements in array:"); 
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]); 
    }
    printf("Enter element to insert:");
    scanf("%d",&num);
    printf("Enter the element position:\n");   
    scanf("%d", &position); 

    if(position>size+1  || position<=0){
        printf("Invalid Positions! Please enter position btw 1 to %d",position,n); 
    }
    else{
        for(i=size;i>=position;i--){
            arr[i] = arr[i-1];
        }
        arr[position - 1 ] = num;
        size++;

        printf("Array elements after insertion is: \n"); 
        for(i=0;i<size;i++){
            printf("%d,",arr[i]); 
        }
    }
    return 0;
}