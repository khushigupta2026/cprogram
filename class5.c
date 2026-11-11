#include <stdio.h>
int main()
{
    int n;
    char ch;
    do {
        printf("Enter the number:");
        scanf("%d",&n);
        if( n % 2 ==0)
        {
            printf("\neven");
        }
        else
        {
      printf("odd");
        }
        printf("\nDo you want more ");
        scanf("%c", &ch);
    }while (ch == 'y' ||ch =='y' );
       
    
    return 0; 
} 
  