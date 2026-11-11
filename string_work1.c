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

  /*P9.3 Program to print the address and characters (")i' the string usin_
pointer*/

char str[]="India";
char *p;
p=str;
while(*p!='\0')
{
printf ("Character = %c\n", *p) ;
printf("Address=%u\n",p) ;
p++;
  }
  return 0;
}