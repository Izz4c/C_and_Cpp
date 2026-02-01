#include <stdio.h>
int main(){
    int n; 
    int gr80,gr60,gr40,leq40;
    int bw810,bw68, bw46, bw04; 
    gr80=0,gr60=0,gr40=0,leq40=0;
    bw810=0,bw68=0, bw46=0, bw04=0; 
    float marks = 0;
    printf("Enter the number of students : "); scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the mark of student(%d) : ",i);scanf("%f",&marks);
        if(marks < 0 || marks > 100){
            printf("Invalid mark!\n");
            i=i-1;
            continue;
        }
        if(marks > 80) gr80++;
        if(marks > 60) gr60++;
        if(marks > 40) gr40++;
        if(marks <= 40) leq40++;

        if(marks >= 81 && marks <= 100) bw810++;
        else if(marks >= 61 && marks <= 80) bw68++;
        else if(marks >= 41 && marks <= 60) bw46++;
        else bw04++;
    }   
    printf("\nNumber of students who have : \n");
    printf("Marks greater than 80          : %d\n",gr80);
    printf("Marks greater than 60          : %d\n",gr60);
    printf("Marks greater than 40          : %d\n",gr40);
    printf("Marks equal to or less than 40 : %d\n",leq40);
    printf("Marks between 81 and 100       : %d\n",bw810);
    printf("Marks between 61 and 80        : %d\n",bw68);
    printf("Marks between 41 and 60        : %d\n",bw46);
    printf("Marks between 0 and 40         : %d\n",bw04);
    return 0;
}