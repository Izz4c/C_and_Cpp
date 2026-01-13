#include <stdio.h>
void main()
{
    float a, b, c, x ;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    printf("Enter c : ");
    scanf("%f",&c);
    x = a/(b - c);
    printf("Value of x -> %d/(%d-%d) = %d\n",a,b,c,x);
}
