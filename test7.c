#include<stdio.h>

int main(){
    int num,i,j;
    
    // label:
    //       printf("We are inside the dark world, ");
    //       goto end;
    //       printf("Hello dear world");
    //       goto label;
    //       end:
    //       printf("Which is not good");

    for(i=0; i<8; i++){
        printf("%d\n", i);

        for(j=0; j<8; j++){

            printf("Enter the number 0 to exit this UI\n");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
        }
    }
     end:
        printf("Thanks! the page has been exited");
          

    return 0;
}