/*
perform the conversion of units kilometers to miles
inches to miles
centimetres to foot
pound to kgs
inches to meters
by using switch case condition
*/
#include <stdio.h>
int main()
{
    int choices;
    float kilometers, miles,inches,foot,centimeters,pounds,kgs,meters;
    char ch;
    printf(" Enter 'Y' if you want to perform conversion:\n");
    printf( "Enter 'N' if you dont want to perform conversion:\n");
    scanf(" %c",&ch);
    switch (ch)
    {
        case 'Y':
        printf("Hi, lets perform the conversions of units:\n");
        printf(" enter 1 to cnvert kilometers to miles:\n");
        printf(" enter 2 to cnvert inches to foot:\n");
        printf(" enter 3 to cnvert centimeters to inches:\n");
        printf(" enter 4 to cnvert pounds to kgs:\n");
        printf(" enter 5 to cnvert inches  to meters:\n");
        scanf("%d",&choices);
        switch (choices)
        {
            case 1:
            printf("Enter kilometers:\n");
            scanf("%f",&kilometers);
            miles = kilometers * 0.621371;
            printf("It is converted to miles at: %f\n ",miles);
            break;
            case 2:
            printf("Enter inches :\n");
            scanf("%f",&inches);
            foot = inches *0.08333;
            printf("It is converted to foot at :%f\n",foot);
            break;
            case 3 :
            printf("Enter centimeters :\n");
            scanf("%f",&centimeters);
            inches = centimeters *0.393701;
            printf("It is converted to inches at :%f\n",inches);
            break;
            case 4:
               printf("Enter pounds :\n");
            scanf("%f",&pounds);
            kgs = pounds *0.453592;
            printf("It is converted to kgs at :%f\n",kgs);
            break;
            case 5:
               printf("Enter inches :\n");
            scanf("%f",&inches);
            meters = inches *39.37;
            printf("It is converted to meters at :%f\n",meters);
            break;
           default:
           printf("!! Wrong choice!!\n");
           break;
        }
        main();
        break;
         case 'N':
         printf("You decided not to convert to anything.\n");
         printf("Thanks for visit.\n have a nice day!\n");
         break;
         deafult:
         printf("You Entered a Wrong character !\n");
    }
    return 0;
}



