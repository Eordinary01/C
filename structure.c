// #include<stdio.h>
// #include<string.h>


// struct Student
// {
//     char name [25];
//     int age;
//     char branch[10];
// };

// int main(){
     
//      struct Student s1;

//      s1.age=18;

//      strcpy(s1.name, "Parth(The DEV)");

//      printf("Name of the student:%s\n",s1.name);
//      printf("Age of Student:%d\n",s1.age);  

//     return 0;

// }

#include <stdio.h>
#include <string.h>

// Define the structure outside the main function
struct Student {
    char name[25];
    int age;
    char branch[10];
    char Hobby[10];
};

int main() {
    // Declare a variable of type struct Student
    struct Student s1;

    // Prompt the user to enter details
    printf("Enter name of the student: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';  // Remove the newline character

    printf("Enter age of the student: ");
    scanf("%d", &s1.age);

    printf("Enter branch of the student: ");
    scanf("%s", s1.branch);

    printf("Enter your Hobby:"); 
    scanf("%s",s1.Hobby); 

    // Print the entered values
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Branch: %s\n", s1.branch);
    printf("Hobby:%s\n",s1.Hobby); 

    return 0;
}

