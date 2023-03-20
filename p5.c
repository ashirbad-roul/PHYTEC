#include<stdio.h>
int main()
{
    int a,b,max;
    printf("enter value of a and b:");
    scanf("%d %d\n",&a, &b);
    max= a>b ?a:b;
    printf("larger of %d \n",max);

    return 0;
}
