/*
swap 2 integer without using temp variable
1- arithmatic mathode
2- XOR methode
*/
#include<stdio.h>

int main()
{
    //arithmatic methode
    int a,b;
    printf("enter 2 integers:\n");
    scanf("%d %d",&a,&b);
    
    printf("BEFORE SWAPPING:\n\n");
    printf("a:%d,b:%d\n\n",a,b);
   
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("AFTER SWAPPING:\n\n");
    printf("a:%d,b:%d\n\n",a,b);
    return 0;
}