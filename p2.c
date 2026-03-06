#include <stdio.h>
int main ()
{
     float a,b;
     printf(" /n enter value of a&b:");
     scanf("%f %f", &a, &b);
     printf("\n addition is: %f", a+b);
     printf("\n subtraction is: %f", a-b);
     printf("\n multiplication is: %f", a*b);
     printf("\n module is: %d", (int)a% (int)b);
     return 0;
}
