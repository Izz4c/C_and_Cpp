#include <stdio.h>
int main(){
	int n; printf("Enter n : ");scanf("%d",&n);
	int pascal[100][100] = {0};
	pascal[0][n/2] = 1;
	for(int i=1;i<n;i++){
		for(int j=(n/2)-i;j<=(n/2)+i;j++){
			int sum = pascal[i-1][j-1] + pascal[i-1][j];
			pascal[i][j] = sum;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i/2;j<n+i/2;j++){
			if(pascal[i][j]!=0){
				printf("%d ", pascal[i][j]);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
} 


