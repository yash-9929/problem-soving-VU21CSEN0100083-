#include <stdio.h>
int main () {
    int a;
    printf ("enter any number :");
    scanf ("%d",&a);
    if (a>0)
    {   printf ("the number is positive ");
    }
    if (a<0)
    { printf ("the number is negative ");
    }
    if (a==0)
    {  printf ("the number is zero");
    }
    return 0;
}