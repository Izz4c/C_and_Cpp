#include <stdio.h>

int main(){
    int array[100]; int n;
    printf("Enter number of elements : "); 
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element (%d) : ",i);
        scanf("%d", &array[i]);
    }
    printf("=====================\nArray : \n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    // Bubble sort : 
    int sorted = 0;
    while(!sorted){
        sorted=1;
        for(int i=0;i<n-1;i++){

            if(array[i]>array[i+1]){
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
                sorted = 0; 
            }
        }
    }
    int search;
    printf("\nEnter the element to search : ");
    scanf("%d",&search);
    printf("=====================\nSorted Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    // Binary search : 
    int curIndex   = n/2, low = 0, high = n-1,pass=1;
    while(array[curIndex]!=search){
        printf("Pass (%d)\n",pass);
        for(int i=0;i<n;i++){
            if(i==low || i == high){
                printf("\x1B[32m");
            }
            if(i==curIndex){
                printf("\x1B[36m");
            }
            printf("%d",array[i]);
            if(i==low || i==high || i == curIndex){
                printf("\x1B[0m ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if(high-low == 1){
            curIndex = -1; 
            break;
        }

        if(array[curIndex] < search){
            low = curIndex;
            curIndex = (low+high)/2;
        }
        else if(array[curIndex] > search){
            high = curIndex;
            curIndex = (low+high)/2;
        }
        else{
            break;
        }
        pass++;
    }
    for(int i=0;i<n;i++){
        if(i==low || i == high){
            printf("\x1B[32m");
        }
        if(i==curIndex){
            printf("\x1B[36m");
        }
        printf("%d",array[i]);
        if(i==low || i==high || i == curIndex){
            printf("\x1B[0m ");
        }
        else{
            printf(" ");
        }
    }
    if(curIndex > 0){
        printf("\nElement found at index %d!\n",curIndex);
    }
    else{
        printf("\nElement not found!\n");
    }
    
    return 0;
}
