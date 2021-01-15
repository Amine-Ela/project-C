#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Donne une valeur: a\n");
    scanf ("%d",&a);
    printf("Donne une valeur: b\n");
    scanf ("%d",&b);
    printf ("a+b= %d\n",a+b);
    printf ("a-b= %d\n",a-b);
    printf ("a*b= %d\n",a*b);
    printf ("a/b= %.2f\n",(float)a/b);
    printf ("a%b= %d\n",a%b);
    return 0;
}
