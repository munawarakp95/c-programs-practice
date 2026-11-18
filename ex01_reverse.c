/*
 question :
reverse a number?
eg:234 ->432 */

#include<stdio.h>

int main()
    {
    int num,reverse=0,remainder;
    

    printf("Enter the number to be reversed:\n");
    scanf("%d",&num);
    
    while(num >0)
    {
      remainder=num%10;
      reverse=reverse*10+remainder;
      num =num/10;
      

    }

    printf("The number after reversed:\n%d\n",reverse);

    return 0;
    }
