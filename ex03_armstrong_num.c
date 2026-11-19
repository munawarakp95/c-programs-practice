/*
question:
a program check a number is armstrong number?
eg=153=1^3+5^3+3^3
*/
#include<stdio.h>

int main()
{
    int num,rem,total=0,temp;
    printf("enter the number:\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
     rem=num%10;
     total=total+rem*rem*rem;
     num=num/10;

    }

    if(total==temp)
    {
        printf("the %d is an Armstrong number\n",temp);

    }
    else
    {
        printf("the %d is not Armstrong number\n",temp);
    }
    return 0;

 }
