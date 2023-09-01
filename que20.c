// Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>
int main()
{
   int n, t, sum = 0, remainder;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;
}