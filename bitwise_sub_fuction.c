/*question :
write a function for substraction without using arithmatic operator?
*/

#include<stdio.h>

int main()
{
int bitwise_sub(int a, int b);
int num1,num2;

printf("enter 2 numbers to subtract?\n");
scanf("%d %d",&num1,&num2);
printf("%d-%d=%d",num1,num2,bitwise_sub(num1,num2));

return 0;
}
int bitwise_sub(int a, int b)
{
    while(b!=0)
    {
        int borrow=(~a)&b;
        a=a^b;
        b=borrow<<1;
    }
    return a;
}