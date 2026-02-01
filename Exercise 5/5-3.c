#include <stdio.h>
int main(){
    float a,b,c,d,m,n;
    printf("Enter a,b,c,d,m,n : "); scanf("%f,%f,%f,%f,%f,%f",&a,&b,&c,&d,&m,&n);
    if(a*d-c*b==0){
        printf("The solution is undefined!\n");
    }
    else{
        float x1 = (m*d-n*b)/(a*d-c*b);
        float x2 = (n*a-m*c)/(a*d-c*b);
        printf("x1 = %f\n",x1);printf("x2 = %f\n",x2);
    }
    return 0;
}