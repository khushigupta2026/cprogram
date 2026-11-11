#include <stdio.h> 
int main(int argc, char const *argv[])
{
    float celsius,fahrenheit;

    printf("enter temperature in celsius :");
    scanf("%f", &celsius);

   fahrenheit = (9.0/5.0)* celsius + 32;
    printf("Temperature in fahrenheit =%.2f\n",fahrenheit);
    return 0;
}
