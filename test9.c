// Functions:- Is being used to easily solve the difficult programs in c.
/*
  Declaration: A function is declared to tell a compiler about its existence. 
  Definition: A function is defined to get some task done.
  Call: A function s called  in order to be used.

  Types of Function:- Library , User Defined functions
*/

#include<stdio.h>
int sum (int a , int b);        /*ALL*/


void printStar(int n){          /* with Argument, without return value*/
    for( int i=0; i<n; i++){
        printf("%c", '*');
    }

}
void name(){                       /*Nothing*/
    printf("Parth (The dev)");
}


int inputNumber()
{
    int i; 
    printf("Enter the number\n");           /*Without Argument and with return value*/
    scanf("%d", &i);
    return i;
}



int main() {
    int a,b,c;
    a=9;
    b=50;
    // c=sum(a,b);
    // printf("The sum is %d\n", c);

    
    // printStar(15);
    

    printf("My name is:");
    name();


    // c = inputNumber();
    // printf("The entered number is: %d\n", c);


    
    return 0;

    
}

int sum (int a , int b) {
    return a+b;
}




