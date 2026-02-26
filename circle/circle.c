#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double distance(double, double, double, double);
double area(double);
double perimeter(double);
int main(){
    printf("Enter the center point coordinates (x,y) : ");
    double j,k;
    scanf("%lf,%lf", &j,&k);
    printf("Enter the coordinates of a point on the circle : ");
    double x,y;
    scanf("%lf,%lf", &x,&y);
    double radius = distance(j,k,x,y);
    printf("The area of the circle is : %lf\n",area(radius));
    printf("The perimeter of the circle is : %lf\n",perimeter(radius));

    return 0;
}

double distance(double x1,double y1, double x2, double y2){
    double d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    return d;
}
double area(double radius){
    return PI*radius*radius;
}
double perimeter(double radius){
    return 2*PI*radius;
}