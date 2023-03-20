#include<stdio.h>
int count()
{
   static int count = 0;
    count++;
    printf("%d", count);
}
int main()
{
    count ();
    count ();
    count ();
    count ();
    return 0;
}


