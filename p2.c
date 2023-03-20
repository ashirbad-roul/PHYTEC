#include <stdio.h>
int main()
{
    int a,b,c,d,i,j;
    printf("enter the value :\n");
    scanf("%d",&a);
    printf("enter the value :\n");
    scanf("%d",&b);
    printf("binary form of a:");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 0x01;
        printf("%d",j);
    }
    printf("binary form of b:");
    for(i=7;i>=0;i--)
    {
        j=(b>>i) & 0x01;
        printf("%d",j);
    }
    printf("\n%d",c=a&b);
    printf("\n%d",d=a|b);
    printf("\n binary from of a&b:");
    for(i=7;i>=0;i--)
    return 0;
}
