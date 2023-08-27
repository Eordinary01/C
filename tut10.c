# include <stdio.h>

// int main ()
// {
//     int age;
//     printf("Enter your age \n");

//     scanf("%d", &age);
//     printf("You have entered %d as your age \n", age );
//     if (age>=18) {
//         printf("You can vote! Choose decision wisely ");
//     }
//     else if (age>10){
//         printf("You ara a teenager right now! Pls wait!! Study until 18 seriously");
        

//     }
//     else{
//         printf("You are not eligible to vote");
//     }

//     return 0;
// }

int main()
{
    int result;
    printf("Enter 0 if you have passed both maths and science exam\n");
    printf("Enter 1 if you have passed in only maths\n");
    printf("Enter 2 if you have passed in only science\n");
    printf("Please enter the subject you have passed!?\n");
    scanf("%d",&result);
    printf("You have entered %d as you passed that exam \n", result);
    if(result==0){
        printf("You will be awarded 450 Rs");
    }
    else if(result==1) {
        printf("You will be awarded 150 Rs");

    }
    else if (result==2){
        printf("You will be awarded 150 Rs ");
    }
    else{
        printf("Enter a valid code for your subject");
    }


   

    return 0;
}


      

