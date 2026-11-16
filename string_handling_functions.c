/*
1- strlen( )
------------
returns the length of the string ( the number of characters'in the string excluding the
eliminating null character)

2- strcmp( )
------------
This function is used for comparison of two strings. If the two strings match, strcmp() returns
value 0, otherwise it returns a non-zero value
 strcmp( s1, s2.) returns a value: 
< 0 when s1 < s2
= 0 when si = = s2
> 0 when sl > s2
*/


#include<stdio.h>
#include<string.h>

int main()
{
    char string1[20],string2[20];
    printf("enter your string 1:\n");
    scanf("%s",string1);
   // fgets(string ,sizeof(string),stdin);           //here a \n is added when you enter.
    
    printf("enter your string 2:\n");
    scanf("%s",string2);
    
    //finding length
    int length1=strlen(string1);
    int length2=strlen(string2);  
    printf("length of your string1:%d\n",length1);   //length=length+'\n'.
    printf("length of your string2:%d\n",length2); 

    //compare strings
     if (strcmp(string1,string2)==0)
     { 
        printf("strings are same\n");
     }
     else
     {
        printf("strings are different\n");
     }
    return 0;

}