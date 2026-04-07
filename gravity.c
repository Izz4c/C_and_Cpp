#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main()
{
    double length, time, g;
    printf("Enter length of pendulum,time period:\n");
    scanf("%lf,%lf", &length, &time);
    g = (4 * PI * PI * length) / (time * time);
    printf("Gravitational acceleration = %lf\n", g);
    return 0;
}
