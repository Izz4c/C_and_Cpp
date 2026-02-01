#include <stdio.h>
int main(){
    int num=0, sum = 0;
    for(int i=100;i<200;i++){
        if(i%7==0){
            num+=1;
            sum+=i;
        }
    }
    printf("Number of numbers : %d\n",num);
    printf("Sum of numbers : %d\n",sum);
    return 0;
}