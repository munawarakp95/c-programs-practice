//address calling

#include<stdio.h>
// 64 : 8 BYTES ,eg:000000914C5FF84C
// 32 : 4 bytes (address)
/*eg;:
 int *ptr; to store address of something
 ptr 
 &ptr address of pointer

int main()
{
// & methode
    float temperature=78.09;
    printf("address using & operator:%p\n",&temperature);
    printf("temperture:%.2f\n\n",temperature);

   
//pointer declaration method
    float *temp_pointer;
    temp_pointer =&temperature;
    printf("address using pointer:%p\n",temp_pointer);
    printf("temperture:%.2f\n\n",*temp_pointer);

     return 0;
}