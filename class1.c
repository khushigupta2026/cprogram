#include <stdio.h>
 int main()
{ 
    int n;

    printf("enter a number:");
    scanf("%d",&n);
if(n >= 0 )
   { 
    if(n==0)
    {
    printf("zero") ;
    }
    else
    {
        if(n % 2 == 0)
        printf("positive and even");
        else 
        printf("positive and odd");
    }
}
else
{
    printf("Negative");
}
   }

    

 