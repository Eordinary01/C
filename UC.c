#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    do
    {
    
        printf(".\n");
        printf("Press 0 for conversion in kms to miles \n");
        printf("Press 1 for conversion in inches to foot \n");
        printf("Press 2 for conversion in cms to inches \n");
        printf("Press 3 for conversion in pound to kgs  \n");
        printf("Press 4 for conversion in inches to meters \n");
        printf("Enter 5 if you want exit the program\n");
        printf("= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n");
        printf("Please enter the number you want conversion of \n");
        scanf("%d", &choice);

        // printf("You have entered %f as you want the conversion of that set \n");

        switch (choice)
        {

            float kms, miles;
        case 0:
        {
            printf("Enter the value in kms \n");
            scanf("%f", &kms);
            miles = kms * 0.621371;
            printf("The value in miles is:%f", miles);

            break;
        }

        case 1:
        {
            float inches, foot;
            printf("Enter the value in inches \n");
            scanf("%f", &inches);
            foot = inches * 0.0833333;
            printf("The value in foot is: %f", foot);
            break;
        }
        case 2:
        {
            float cms, inches;
            printf("Enter the value in cms \n");
            scanf("%f", &cms);
            inches = cms * 0.393701;
            printf("The value in inches is: %f", inches);
            break;
        }
        case 3:
        {
            float pound, kgs;
            printf("Enter the value in pounds \n");
            scanf("%f", &pound);
            kgs = pound * 0.453592;
            printf("The value in kg is: %f\n", kgs);
            break;
        }
        case 4:
        {
            float inches, meters;
            printf("Enter the value in inches \n");
            scanf("%f", &inches);
            meters = inches * 0.0254;
            printf("The value in meter is: %f \n", meters);
            break;
        }
        case 5:
            exit(1);
        default:
            printf("Select the valid number for output");
            break;
        }

    } while (choice != 6);
    return 0;
}