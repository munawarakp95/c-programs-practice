/*
question:
take a string from user and print its size?

*/


#include<stdio.h>

int main()
{
  char name[20];  
  int i=0;
  printf("what is your name?\n");
  scanf("%19s",name);  
    
//for loop methode
   
   for( i=0;name[i]!='\0';i++)
    {
  
    }
  printf("size by for loop=%d\n\n",i);
   
 
  //while loop
  while(name[i]!='\0')
  {
    i++;
  }
  printf("size by while loop=%d\n\n",i);
  //printf("size=%zu\n",sizeof(name)); not possible
  // it returns total memory allocated

  return 0;
}