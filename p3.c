#include<stdio.h>
int main()
{
    unsigned char a=5, b=9;
    printf("a =%d,b = %d\n",a,b);
    printf("a&b = %d\n",a&b);
    printf("a|b = %d\n",a | b);
    printf("a^b = %d\n",a ^ b);
    printf("~a = %d\n",a = ~a);
    printf("b>>2 = %d\n",b>>2);
    printf("b<<3 = %d\n",b<<3);
     
    return 0;
}