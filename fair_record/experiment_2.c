#include <stdio.h>

int main(){
    int m1,m2,m3;
    printf("Enter the mark of first subject (/100): ");
    scanf("%d",&m1);
    printf("Enter the mark of second subject (/100): ");
    scanf("%d",&m2);
    printf("Enter the mark of third subject (/100): ");
    scanf("%d",&m3);

    // Finding the largest using nested if
    if(m1>m2){
        if(m1>m3){
            printf("First subject has highest marks! (%d/100)",m1);
        }
        else{
            printf("Third subject has highest marks! (%d/100)",m3);
        }
    }
    else{
        if(m2>m3){
            printf("Second subject has highest marks! (%d/100)",m2);
        }
        else{
            printf("Third subject has highest marks! (%d/100)",m3);
        }
    }
    printf("\n");
    // Finding smallest using if-else
    if(m1<m2 && m1<m3)
        printf("First subject has lowest marks! (%d/100)",m1);
    else if (m2<m1 && m2<m3)
        printf("Second subject has lowest marks! (%d/100)",m2);
    else
        printf("Third subject has lowest marks! (%d/100)",m3);

    float avg = (float)(m1+m2+m3)/2.0f;
    int V = (avg>=50)?1:0;
    printf("\nV = %d\n",V);
    return 0;
}