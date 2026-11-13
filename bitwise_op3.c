/*
to set a n numbers at pth position:
  equation : value|(((1<<n)-1)<<p)

to clear a n number at pth position:
   equation : value&~(((1<<n)-1)<<p)

to toggle a n number at pth position:
   equation : value^(((1<<n)-1)<<p)


*/

#include<stdio.h>

 int main()
 {
    int value;
    printf("enter your number:\n");
    scanf("%d",&value);
   
    //set 3 numbers from 4th postion?
     
    /*
    value=value|(((1<<3)-1)<<2);
    printf("value after setting: %d\n",value);   
    */
    

    
    //clear 3 numbers from 3rd  postion?
    /*
    value=value&~(((1<<3)-1)<<1);
    printf("value after clearing: %d\n",value);
   */  

   //toggle 3 numbers from 3rd  postion?
    value=value^(((1<<3)-1)<<1);
    printf("value after toggling: %d\n",value);

    return 0;  
 }   
    