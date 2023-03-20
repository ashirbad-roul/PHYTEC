#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a;
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("binary from the  number a:");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        printf("position :%d\n",i);
        printf("position binary value :%d\n",j);
    }
}