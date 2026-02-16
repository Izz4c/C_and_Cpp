#include <stdio.h>

int main(){
	int a[100][100];
	int m,n;
	printf("Enter dimensions (m,n) : ");
	scanf("%d,%d",&m,&n);
	if(m!=n){
		printf("NOT A SQUARE MATRIX!\n");
		return 0;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("A[%d][%d] : ",i,j); 
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("(1) Diagonal, (2) Upper Triangle, (3) Lower Triangle : \n");
	int c;
	scanf("%d",&c);
	switch(c){
		case 1:
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					if(i==j) printf("%d ",a[i][j]);
					else printf("0 ");
				}
				printf("\n");
			}
			break;
		case 2:
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					if(j>=i) printf("%d ",a[i][j]);
					else printf("0 ");
				}
				printf("\n");
			}
			break;
		case 3:
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					if(j<=i) printf("%d ",a[i][j]);
					else printf("0 ");
				}
				printf("\n");
			}
			break;
		default:
			printf("Invalid choice!\n");
	}
	return 0;
}


