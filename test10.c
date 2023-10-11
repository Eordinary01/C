#include<stdio.h>
#include<string.h>

// function
int revstr(char * str1){

//  declare variable
    int i, len, temp;
    len= strlen(str1);

    for(i=0; i<len/2; i++){

        temp = str1[i];
        str1[i]= str1[len-i-1];
        str1[len-i-1] = temp;
    }
}

int main(){

    char str[50];
    printf("Enter the string you want to reverse:-\n");
    gets(str); /* use gets () function to take string*/


    revstr(str);
    printf("After reversing the string:%s\n", str);
}
