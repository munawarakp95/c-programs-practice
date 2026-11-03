/*
Q1: FIND HIGHEST AND LOWEST ELEMENT OF AN ARRAY

*/
#include<stdio.h>

int main()
{
  int num[5];

     for (int i = 0; i < 5; i++)
     {
      printf("enter the value of num[%d]:\n",i);
      scanf("%d",&num[i]);
     }
  
//highest value
     int highest =num[0];
      for (int i = 1; i < 5; i++)
      {
       if (num[i]>highest)
       {
        highest=num[i];
       }
        
//lowest value
     int lowest =num[0];
      for (int i = 1; i < 5; i++)
      {
       if (num[i]<lowest)
       {
        lowest=num[i];
       }
      }

      printf("highest number of array is:%d\n\n",highest);
      printf("lowest number of array is:%d\n\n",lowest);

       return 0;
      }
      
    






    return 0;
}