// Write a program to find the sum of elements in two different matrix

#include <stdio.h>
#define COLOR(r,g,b) "\x1b[38;2;"#r";"#g";"#b"m"
#define RESET "\x1b[0m"
int main(){
	int a[100][100]; int m,n;
	int b[100][100]; int p,q;
	printf("Enter dimensions of A(m,n) : ");
	scanf("%d,%d",&m,&n);
	printf("Enter dimensions of B(p,q) : ");
	scanf("%d,%d", &p,&q);
	if(n!=p){
		printf("Dimensions invalid!\n");
		return 0;
	}
	int c[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			printf("B[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("A : \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("B : \n");
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	printf("Multiplying a and b!\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<n;k++){
				printf("=========================================\n");
				for(int u=0;u<m;u++){
					for(int v=0;v<n;v++){
						if(u==i && v==k){
							printf(COLOR(0,255,0)"%d "RESET,a[u][v]);
						}
						else{
							printf("%d "RESET,a[u][v]);
						}
					}
					printf("\n");
				}
				for(int u=0;u<p;u++){
					for(int v=0;v<q;v++){
						if(u==k && v==j){
							printf(COLOR(0,255,0)"%d "RESET,b[u][v]);
						}
						else{
							printf("%d "RESET,b[u][v]);
						}
					}
					printf("\n");
				}
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
				getchar();
			}
		}
	}
	printf("C = \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
