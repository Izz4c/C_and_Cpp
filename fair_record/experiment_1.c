#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

float distance(float, float, float, float);
float area(float);
float perimeter(float);

int main(){
        float x1,y1,x2,y2;
        printf("Enter first point (x,y) : ");
        scanf("%f,%f",&x1,&y1);
        printf("Enter second point (x,y) : ");
        scanf("%f,%f",&x2,&y2);

        float dia = distance(x1,y1,x2,y2);
        float a   = area(dia/2);
        float p   = perimeter(dia);
        printf("Diameter : %f\nArea : %f\nPerimeter : %f\n",dia,a,p);

        return 0;
}

float distance(float x1,float y1, float x2, float y2){
    return (float)sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}
float area(float radius){
    return PI*radius*radius;
}
float perimeter(float diameter){
    return PI*diameter;
}