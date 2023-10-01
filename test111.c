#include <stdio.h>

// int returnMax(int array[], int n){
//     int max = 0;
//     for( int i=0; i < n ; i++)
// {
//     if (array[i] > max)
//     {
//         max = array[i];
//     }
// }
// return max;
// }

// int main()
// {

//     int arr[] = {1, 2, 56, 45, 7, 8, 123, 556};
//     int max = returnMax(arr, 8);
//     printf("The maximun element in this array is %d", max);
//     return 0;
// }


int main(){

    int a,b,big;

    printf("Enter two numbers to find which one is greater \n");
    scanf("%d%d", &a,&b);

  

  


     if(a>b){
        big=a;
    }
    else{
       big=b;
    }
    printf("Biggest of the two number is :%d",big );




    return 0;

    
}