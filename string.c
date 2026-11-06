/*
strings
 char name[]="muna" -> m|u|n|a|'\0'
size  =char size+1 null 


*/
#include<stdio.h>

int main()
{

// methode 1
    char name[]="muna";  // here string size is not given bcs both declatation and 
    printf("size=%zu\n",sizeof(name));

// methode 2
    char name1[9]="santhosh";
    printf("name=%s\n",name1);

// methode 3
    char name2[]={'h','e','l','l','o','\0'}  ; 
    printf("name2=%s\n",name2);
    
 return 0;
}