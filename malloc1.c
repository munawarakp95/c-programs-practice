/*
dynamic memry allocation
-allocating memmory in heap seg during RUNTIME
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

/*
malloc
-------------------------------------------
syntax: (data type*)malloc(size in bytes);
*/
    
//need to store 5 integer?
int *ptr;
ptr=malloc(5*sizeof(int));
if(ptr==NULL)
{
    printf("Memory Allocation Failed");
    return 1;
}
  
 printf("starting address of malloc:%p\n\n",ptr);
for(int i=0;i<5;i++)
{
    printf("Enter the number(%d):\n",i);
    scanf("%d",&ptr[i]);
}

for(int j=0;j<5;j++)
{
printf("number[%d]=%d\n\n",j,ptr[j]);
}
free(ptr);
return 0;

}