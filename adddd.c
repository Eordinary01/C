// Pointer Arithemetic:-  '+' , '-' , '++' , '--' 

#include <stdio.h>
int main()
{
    /*
    int a = '9';
    int* ptra = &a;
    printf("%d\n",ptra);
    ptra++; 
    printf("%d\n",ptra); 
    printf("%d\n",ptra+1); 
    printf("%d\n",ptra+2); 
    printf("%d\n",ptra+5); 
    */

   int arr[] = {1,20,311,425,51,82,7};
   printf("Array at position 3 of array is %d\n",arr[3]); 
   printf("The address of  first element of array is:%d\n",&arr[0]); 
   printf("The address of  second element of array is:%d\n",&arr[1]); 
   printf("The address of  third element of array is:%d\n",&arr[2]); 
   printf("The address of  fourth element of array is:%d\n",&arr[3]); 
   printf("The address of  fifth element of array is:%d\n",&arr[4]); 
   printf("The address of  sixth element of array is:%d\n",&arr[5]); 
   printf("The address of  seventh element of array is:%d\n",&arr[6]); 
   printf("---------------------------------------------------------------------------------\n"); 
   printf("The value at address of  first element of array is:%d\n",*(&arr[0])); 
   printf("The value at address of  second element of array is:%d\n",*(&arr[1]));
   printf("The value at address of  third element of array is:%d\n",*(&arr[2])); 
   printf("The value at address of  fourth element of array is:%d\n",*(&arr[3]));
   printf("The value at address of  fifth element of array is:%d\n",*(&arr[4])); 
   printf("The value at address of  sixth element of array is:%d\n",*(&arr[5])); 
   printf("The value at address of  seventh element of array is:%d\n",*(&arr[6]));
    
    return 0;
}