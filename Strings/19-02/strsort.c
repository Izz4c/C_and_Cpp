#include <stdio.h>
#include <string.h>
#define N 10
int main(){
	printf("Simply press enter to stop.\n");
	char strings[N][100];
	int i=0,j=0,n=0;
	while(i<N){
		char c = 0;
		j=0;
		printf("Enter string(%d) : ",i);
		do{
			c = getchar();
			if(c=='\n') break;
			strings[i][j] = c;
			j++;
		}while(j<99);
		if(j==0) break;
		strings[i][j] = 0;
		i++;
	}
	n=i;
	int pass=1,sorted = 0;
        while(!sorted){
        	sorted=1;
		char temp[100];
	        for(int i=0;i<n-pass;i++){
                	int cmp = strcmp(&strings[i][0],&strings[i+1][0]);
			if(cmp>0){
				strcpy(temp,&strings[i][0]);
				strcpy(&strings[i][0],&strings[i+1][0]);
				strcpy(&strings[i+1][0],temp);
				sorted = 0;
			}
		}
		pass++;
	}
	printf("Sorted : \n");
	for(int i=0;i<n;i++){
		printf("%s\n",&strings[i][0]);
	}
	return 0;
}
