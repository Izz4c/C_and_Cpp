#include <stdio.h>
int main(){
    printf("Enter the radius for area and volume : ");
    float r1,r2;
    scanf("%f,%f",&r1,&r2);
    float pi = 3.14159265359;

    float area = pi * r1 * r1;
    float volume = (4/3)*pi*r2*r2*r2;
    printf("Area of circle : %f\n",area);
    printf("Volume of sphere : %f\n",volume);
    return 0;
}