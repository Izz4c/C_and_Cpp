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
    // Bubble sort
    int pass=1,sorted = 0;
    while(!sorted){
        sorted=1;
        printf("\nPass (%d)\n",pass);
        
        for(int i=0;i<n-pass;i++){
            
            if(array[i]>array[i+1]){
                for(int j=0;j<n;j++){
                    if(j == i){
                        printf("\x1B[32m");
                    }
                    if(j == i+1){
                        printf("\x1B[33m");
                    }
                    printf("%d",array[j]);
                    if(j == i || j == i+1){
                        printf("\x1B[0m ");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("\n");
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
                sorted = 0;
            } 
        }
	for(int i=0;i<n;i++){
            printf("%d ",array[i]);
	}

        pass++;
    }
    printf("\n=====================\nSorted Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
