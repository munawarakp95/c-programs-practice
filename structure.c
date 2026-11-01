
//structure//
/*
student name-string
student id -int
grade -char
percentage-float 
*/
#include <stdio.h>
#include<string.h>

struct student
{
    //structure members
    char name[20];
    int id;
    char grade;
    float percentage;
    //here no memory created
};
int main()
{
struct student s1={"muna",1234,'A',87};//a m/y is created
struct student s2; //this typr declaration cant support name
struct student s3 ={0};

strcpy(s2.name,"adam");
//s2.name="adam"; error
s2.id=12345;
s2.grade='B';
s2.percentage=69.9;

printf("----------student 1 details------------\n");
printf("name       :%s\n",s1.name);
printf("id         :%d\n",s1.id);                  
printf("grade      :%c\n",s1.grade);
printf("percentage :%.2f\n",s1.percentage);

printf("----------student 2 details------------\n");
printf("name       :%s\n",s2.name);
printf("id         :%d\n",s2.id);
printf("grade      :%c\n",s2.grade);
printf("percentage :%.2f\n",s2.percentage);

printf("----------student 3 details------------\n");
printf("name       :%s\n",s3.name);
printf("id         :%d\n",s3.id);
printf("grade      :%c\n",s3.grade);
printf("percentage :%.2f\n",s3.percentage);

return 0;
}
