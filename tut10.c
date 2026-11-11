#include <stdio.h>

int main(int argc, char const *argv[])
{ 
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n",age);
    if (age>=18)
    {printf("you can vote!");
        
    }
    
    else if(age>10)
    {
     printf("you are between 10 to 18 and you can vote for kid");
    }
    else if(age>=3)
    {
     printf("you are between 3 to 10and you can vote for babies");
    }
else{
    printf("you cannot vote");
}
    
    return 0;
}
