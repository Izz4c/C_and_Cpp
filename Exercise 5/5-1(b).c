#include <stdio.h>
int main(){
    int n; 
    printf("Enter the number : "); scanf("%d",&n);
    if(n & 1){
        printf("NUMBER IS ODD!\n");
    }
    else{
        printf("NUMBER IS EVEN!\n");
    }
    return 0;
}