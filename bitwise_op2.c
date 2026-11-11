/* 
Seting a bit on:
 1-left shift 1 to that position
 2.OR with the number
       7654 3210
  181  =1011 0101
  1<<3 =0000 1000
 -----------------
   (|) =1011 1101 -->189

clearing bit
 1-left shift 1 to that position
 2-flip the 1(~)
 3-AND with value.

     189     =1011 1101
     ~(1<<3) =1111 0111
     -------------------
      (&)    =1011 0101 -->181

toggle a bit
1 -> 0
0 -> 1 
  1-left shift 1 to that position
  2- XOR     

 */

 #include<stdio.h>

 int main()
 {
  int value=181;
  
  //set bit
  value=value|(1<<3);
  printf("value: %d\n",value);

  //clear bit
  value=(value)&(~(1<<3));
  printf("value after clearing: %d\n",value);

  //Toggle a bit
   
  value=value^(1<<4);
  printf("value after toggling: %d\n",value);


  
   return 0;
 }