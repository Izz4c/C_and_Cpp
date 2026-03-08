#include <stdio.h>
#include <math.h>
int main(){

    // SIN(X)
    double sinx = 0;
    double x = 0;
    term = x;
    n = 1;

    sinx = x;
    while(1){
        term *= (-x*x) / ((n+1)*(n+2));
        sinx += term;
        printf("%lf %s ",term,((term<0)?"-":"+"));
        n += 2;
        if(fabs(term) < 0.0000001) break;
    }
    printf("\nsin(%lf) : %lf\n",x, sinx);

    // COS(X)
    double cosx = 0;
    x = 0;
    term = 1;
    n = 1;

    cosx = 1;
    while(1){
        term *= (-x*x) / ((n)*(n+1));
        cosx += term;
        printf("%lf %s ",term,((term<0)?"-":"+"));
        n += 2;
        if(fabs(term) < 0.0000001) break;
    }
    printf("\ncos(%lf) : %lf\n",x, cosx);

    // SUM
    double sum = 0;
    term = 1;
    n=1;
    
    sum = 1; 
    while(1){
        term = pow(1.0f/n,n);
        sum += term;
        printf("%lf + ",term);
        n+=1;
        if(term < 0.0000001) break;
        
    }
    printf("\nsum : %lf\n", sum);
    return 0;
}
