#include <stdio.h>
int main()
{
  float celsius,fahrenheit;

  printf("Enter temperature in celsius:");
  scanf("%f", &celsius);

  fahrenheit = (9.0/5.0)*celsius+32;
  printf("temperature in Fahrenheit =%.2f\n",fahrenheit);
    return 0;
}
