#include <stdio.h>
int main(){
    float math,phys,chem;
    printf("Enter marks in Mathematics : "); scanf("%f",&math);
    printf("Enter marks in Physics : "); scanf("%f",&phys);
    printf("Enter marks in Chemistry : "); scanf("%f",&chem);
    if(math < 60 || phys < 50 || chem < 40){
        printf("Ineligeble!\n");
    }
    else{
        if(math+phys+chem >= 200 || phys+math >= 150){
            printf("Eligible!\n");
        }
        else{
            printf("Ineligible!\n");
        }
    }

    return 0;
}