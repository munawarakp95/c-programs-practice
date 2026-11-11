/*
 strlen( )
------------
returns the length of the string ( the number of characters'in the string excluding the
eliminating null character)



*/
#include<stdio.h>
#include<string.h>

int main()
{
    char string[20];
    printf("enter your string:\n");
    //scanf("%s",string);
    fgets(string ,sizeof(string),stdin);
    int length=strlen(string);
    printf("length of your string:%d\n",length);

    return 0;

}