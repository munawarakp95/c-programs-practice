/*question :
write a function for addition without using arithmatic operator?
*/
#include<stdio.h>

int main()
{
int bitwise_add(int a, int b);
int num1,num2;

printf("enter 2 numbers to add?\n");
scanf("%d %d",&num1,&num2);

printf("%d+%d=%d\n",num1,num2,bitwise_add(num1,num2));
 return 0;
}

int bitwise_add(int a, int b)
{
while(b!=0)
{
    int carry=a&b;
    a=a^b;
    b=carry<<1;
}
return a;
}