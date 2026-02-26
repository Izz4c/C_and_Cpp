#include <stdio.h>
int main(){
        char strorig[100];
        char strcopy[100] = {0};
        printf("Enter the string : ");
        scanf("%[^\n]s", strorig);
        int i = 0;
        while(strorig[i]!=0){
                strcopy[i] = strorig[i];
                i++;
        }
        strcopy[i] = 0;
        printf("%s\n",strcopy);
        return 0;
}


