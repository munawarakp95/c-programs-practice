/*
question:
a program to add the digts of a number?
eg=234 -->2+3+4=9
*/
#include<stdio.h>

int main()
{
int num,remainder,total=0;

printf("enter the number:\n");
scanf("%d",&num);

while(num>0)
{
    remainder=num%10;
    total=total+remainder;
    num=num/10;

}

printf("sum of the digits:%d\n",total);





return 0;
}