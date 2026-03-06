#include <stdio.h>
int main()
{
    int a=51;
    int  b=7;
    int sum= a+b;
    int  sub= a-b;
    int  multi= a*b;
    float division= (float)a/b;
    int module= a%b;
    printf("arithmetic operation");
    printf("\n a+b=%d" ,sum);
    printf("\n a-b=%d",sub);
    printf("\n a*b=%d",multi);
    printf("\n a/b=%f",division);
    printf("\n modulo =%d" ,module);
    return 0;
}
