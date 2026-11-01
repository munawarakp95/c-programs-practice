#include<stdio.h>

int main()
{
    int a;
    char b;
    short int c;
    long int d;
    float e;
    double f;
    printf("size of int a       = %zu bytes\n",sizeof(a));
    printf("size of char b      = %zu bytes\n",sizeof(b));
    printf("size of short int c = %zu bytes\n",sizeof(c));
    printf("size of long int d  = %zu bytes\n",sizeof(d));
    printf("size of float e     = %zu bytes\n",sizeof(e));
    printf("size of double f    = %zu bytes\n",sizeof(f));
    return 0;
}
