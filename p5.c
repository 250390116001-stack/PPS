#include <stdio.h>
int main()
{
       char name;
       float cgpa;
       double mobileno;
       int enrollmentno;
       printf("\n enter your name:");
       scanf("%c",&name);
       printf("\n enter your cgpa:");
       scanf("%f",&cgpa);
       printf("\n enter your mobileno:");
       scanf("% ld",&mobileno);
       printf("\n enter your enrollmentno:");
       scanf("%d",&enrollmentno);
       printf("your name: %c",name);
       printf("your cgpa: %f",cgpa);
       printf("your mobileno : %ld",mobileno);
       printf("your enrollmentno : %d",enrollmentno);
       return 0;
}
       
       
