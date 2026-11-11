// #include <stdio.h>
// // without return without argument
// //  void add (); //function prototype
// int main()
// {
//     add();
//     // printf("\nWelcome");//function calling
//     return 0;

// }
// void add() // function defintion
// {
//  int x ,y,z;
//   x = 55;
//   y = 44;
//    z = x + y ;
//    printf("\nSum is %d", z);
// }
// #include <stdio.h>
// // with return with argument
// int add(int,int);
// int main(){
//     int p ,q ,r;
//     p = 33;
//     q = 11;
//      r =add(p,q);
//      printf("sum is %d",r);
//       return 0;
// }
// int add(int x ,int y)
// { 
//     int z;
//     z = x + y;
//     return z ;
// }
// #include <stdio.h>
// without return with argument
// void add(int,int);
// int main()
// {
//     int a ,b ;
//     printf(" Enter the values of a and b:");
//     scanf("%d %d", &a ,&b);
//     add(a,b);
//     return 0;

// }
// void add(int a, int b)
// {
//     int z;
//     z= a+b;
//     printf("%d",z);
// }
// with return without argument
#include <stdio.h>
int add();
int main()
{
    int result;
    result = add();
    printf("Addition =%d",result);
    return 0;

}
int add()
{
  int a ,b,sum;
  printf("Enter two numbers:  ");
  scanf("%d %d", &a ,&b);
  sum = a +b;
return sum;
}