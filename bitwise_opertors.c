/*bitwise operator

AND operator(&):
--------------
A  B  O
0  0  0
1  0  0
0  1  0
1  1  1

0 & x ->0
1 & x ->x

eg:8 & 3
   1 0 0 0
   0 0 1 1
   --------
   0 0 0 0

OR operator(|):
--------------
A  B  O
0  0  0
1  0  1
0  1  1
1  1  1

0 & x ->x
1 & x ->1

XOR operator(|):
--------------
A  B  O
0  0  0
1  0  1
0  1  1
1  1  0  (BOTH ARE SAME THEN 0)

Bitwise NOT operator(~):
--------------
0 ~ 1
1 ~ 0
~ flip the bits


leftshift operator

1    :0000 0001
1<<3 :0000 1000 -> 1*2^3=8

rightshift operator

32    :0010 0000
32>>3 :0000 0100 -> (32 / 2^3) = 4
*/
#include<stdio.h>
int main()
{
//AND operator    
printf("8 & 3 =%d\n",(8 & 3));

//OR operator    
printf("8 | 3 =%d\n",(8 | 3));

//XOR operator    
printf("8 ^ 3 =%d\n",(8 ^ 3));

printf("0 after ~0 =%u\n",~(0));

printf("4294967295 after ~4294967295 =%u\n",~(4294967295));
 
printf("1 << 3 =%d\n",(1<<3));

printf("32 >> 3 =%d\n",(32>>3)); 

return 0;
}