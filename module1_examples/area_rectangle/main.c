#include <stdio.h>
int main(){
    float width,height;
    printf("Enter width, height : ");
    scanf("%f,%f", &width,&height);
    float area = width*height;
    printf("Area = %f\n",area);
    return 0;
}