#include <stdio.h>
int main()
{
    int n, rem, reverse =0 , orig;
     printf("Enter a number:");
     scanf("%d",&n);
     orig = n;

     while (n !=0)
     {
        rem = n% 10;
        reverse = reverse * 10 +rem;
        n = n/10;
     }
     if (orig ==reverse)
     printf(" it is palindrome");
     else 
     printf(" it is not palindrome");
    }