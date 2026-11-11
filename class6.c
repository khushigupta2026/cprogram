#include <stdio.h>
int main()
{
    int n, rem, reverse =0 ;
     printf("Enter a number:");
     scanf("%d",&n);
     while (n !=0)
     {
        rem = n% 10;
        reverse = reverse * 10 +rem;
        n = n/10;
     }
     printf(" Reverse number = %d", reverse);
     return 0;
}
//  n % 10 = extract  last digits of the number using modulus operator.
//  reverse  = reverse* 10 +rem =  first reverse the digit then add.
//  while (!=0)= loop will run until the number is 0.