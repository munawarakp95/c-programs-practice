/*question
program to find a number is positive negative or zero using nested if?

*/

#include<stdio.h>

int main()
{
double n;    
printf("enter a number:\n");
scanf("%lf",&n);

if (n>=0)
{
  if (n==0)
  {
    printf("number is zero\n");
  }
  else
  {
  printf("number is positive\n"); 
  }
}
else
{
    printf("number is negative");
}

return 0;
}