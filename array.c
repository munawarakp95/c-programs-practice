/*arrays
collection of elements of same data type stored in continues memory location.
int temp1;
int temp2;




temp 100;
 
-syntax data_type array_name [size];
    eg: int temp[20];

total size= size *data_type size

*/

#include<stdio.h>

// basic array operations
/*int main()
{
 int temp[5] = {100,98,88,97,76};
   
 printf("array address : %p\n",temp);

 printf("address of array[0]: %p\n",&temp[0]);

 printf("address of array[1]: %p\n",&temp[1]);

 for (int i=0 ; i<5;i++)
 {
    printf("temperature %d=%d\n",i,temp[i]);

 }
*/


//class work
int main()

{
    int num[5];
    
    for (int i=0 ; i<5;i++)
   {
    printf("enter number[%d]=\n",i);
    scanf("%d",&num[i]);
   }

  for (int j=0; j<5;j++)
   {
    printf("numbers %d=%d\n",j,num[j]);
   }

 return 0;


}