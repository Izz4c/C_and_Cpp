#include <stdio.h>
int main(){
    printf("Enter the width, breadth and height : ");
    float w,b,h;
    scanf("%f,%f,%f",&w,&b,&h);
    float volume = w*b*h;
    printf("Volume of the cuboid is : %f\n",volume);
    return 0;
}