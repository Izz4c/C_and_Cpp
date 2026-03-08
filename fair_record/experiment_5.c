#include <stdio.h>
#include <string.h>
#define NAMESIZE 40
int search(int array[],int size, int s){
    for(int i=0;i<size;i++){
        if(s==array[i]) return i;
    }
    return -1;
}
void fill(int array[], int size, int num){
    for(int i=0;i<size;i++) array[i] = num;
}
void alphabetical(int rollno[],char name[][NAMESIZE],int marks[], int n){
    int ordered[n];
    int i = 0;
    char max[NAMESIZE];
    int max_index = 0;
    strcpy(max,name[i]);
    fill(ordered,n,-1);
    while(ordered[n-1]==-1){
        for(int j=0;j<n;j++){
            if(strcmp(name[j],max)>0 && (search(ordered,n,j)==-1)){
                strcpy(max,name[j]);
                max_index = j;
            }
        }
        ordered[i] = max_index;
        i++;
    }
    printf("Ordered : ");
    for(i=0;i<n;i++){
        printf("%d ",ordered[i]);
    }
    printf("\n");
}

int main(){
    int n,j; 
    printf("Enter the number of entries : ");
    scanf("%d",&n);
    int rollno[n];
    char name[n][NAMESIZE];
    int marks[n];

    for(int i=0;i<n;i++){
        printf("Enter roll number (%d) : ",i);
        scanf("%d",&rollno[i]);
        printf("Enter name (%d) : ",i);
        char c; j=0;
        while(getchar() != '\n'); 
        while(1){
            c = getchar();
            if(c=='\n'){
                name[i][j] = '\0';
                break;
            }
            name[i][j] = c;
            j++;
        }
        printf("Enter marks (%d) : ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
        printf("%s\n",name[i]);
    }
    alphabetical(rollno,name,marks,n);
    return 0;
}