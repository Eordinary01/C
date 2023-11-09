// Pointers:- A variable which stores the address of another vairable. 
// Pointer in C programming language can be declared using  *  (asterisk symbol)..
// The address of operator '&' returns the address of variable
// * is the deference operator (also called indirection operator) used to get the value at a given adderess.


#include<stdio.h>

int main(){

    printf("Lets learn about pointers \n");
    int a = 69;
    int* ptra = &a;
    printf("The address of pointer to a is %p \n",&ptra);
    printf("The address of  a is %p \n",&ptra);
    printf("The value of a is %p \n",*ptra);
    printf("The value of a is %d \n",*ptra);
    return 0;
}