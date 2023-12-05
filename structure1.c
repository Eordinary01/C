#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
    char name[25];
    int age;
    char gender;
} pl1[100];

int main()
{
    int i, m;

    printf("Enter the Details of Person\n");
    printf("Enter the number of Persons in data:\n");
    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        printf("Enter the name of Person %d:", i + 1);
        scanf("%s", pl1[i].name);  // Use %s to read a string

        printf("Enter the age of the person :"); 
        scanf("%d",&pl1[i].age);

        printf("Enter the Gender(M/F):");
        scanf(" %c",&pl1[i].gender);   
    }

    // Additional code for displaying entered details
    printf("\nDetails of Persons:\n");
    for (i = 0; i < m; i++)
    {
         printf("Person %d:\n", i + 1);
        printf("Person %d: Name: %s\n", i + 1, pl1[i].name);
        printf("Age of Person %d: %d\n",i + 1,pl1[i].age); 
        printf("Gender of Person %d: %c\n",i + 1,pl1[i].gender); 
        printf("\n"); 
    }

    return 0;
}
