#include<stdio.h>

int main(){
    int arr[100];
    int size, i,j,temp;

    printf("Enter the size of array:\n"); 
    scanf("%d", &size); 
    printf("Enter the elements in array:\n");

    for(i=0;i<size;i++){
        scanf("%d", &arr[i]); 
    } 
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Elements of array in sorted ascending order is:");
    for(i=0;i<size;i++){
        printf("%d,",arr[i]); 
    } 
    return 0;
}