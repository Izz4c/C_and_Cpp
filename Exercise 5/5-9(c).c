#include <stdio.h>
int main(){
    float x; int y;
    printf("Enter x: ");
    scanf("%f", &x);

    y = (x > 0) ? 1:(x == 0?0 : -1);

    printf("y = %d\n", y);
    return 0;
}