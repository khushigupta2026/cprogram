#include <stdio.h>
int main()
{
    int choice;
    float r,l,b,s,area;
    printf("1.area of circle\n");
    printf("2.area of rectangle\n");
    printf("3.area of square\n");
    printf("Enter your choice:");
   scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("Enter radius:");
    scanf("%f",r);
    area=3.14*r*r;
    printf("area of circle =%d.2f",area);
    break;
    case 2:
    printf("Enter length and breadth:");
    scanf("%f %f",&l ,&b);
    area=l*b;
    printf("area of rectangle=%.2f",area);
    break;
    case 3:
    printf("enter side:");
    scanf("%f",&s);
    area= s * s ;
    printf("area of square = %.2f", area);
    break;
    default:
    printf("Invalid choice");

}
    return 0;
}
