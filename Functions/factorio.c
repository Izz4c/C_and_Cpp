#include <stdio.h>
void factorial_nargnret(void){
	int n;
        printf("Enter n : ");
        scanf("%d",&n);
        int prod = 1;
        for(int i=n;i>1;i--){
                prod*=i;
        }
        printf("Factorial of %d is %d\n", n,prod);
}

void factorial_nret(int n){
	int prod = 1;
	for(int i=n;i>1;i--){
		prod*=i;
	}
	printf("Factorial of %d is %d\n",n,prod);
}
int factorial(int n){
	int prod = 1;
	for(int i=n;i>1;i--){
		prod*=i;
	}
	return prod;
}
int factorial_rec(int n){
	if(n==1){
		return 1;
	}
	return n*factorial_rec(n-1);
}
int main(){
	printf("1 : W/O Functions\n"
	       "2 : Functions with no args and ret\n"
	       "3 : Functions with args and no ret\n"
               "4 : Functions with args and ret\n"
               "5 : Functions with recursion\n");
	printf("Enter choice : ");
	int c;
	scanf("%d",&c);

	int n,fact;
	switch(c)
	{
		case 1:
			printf("Enter n : ");
			scanf("%d",&n);
			int prod = 1;
        		for(int i=n;i>1;i--){
                		prod*=i;
        		}
        		printf("Factorial of %d is %d\n", n,prod);
			break;
		case 2:
			factorial_nargnret();
			break;
		case 3:
			printf("Enter n : ");
			scanf("%d",&n);
			factorial_nret(n);
			break;
		case 4:
			printf("Enter n : ");
			scanf("%d",&n);
			fact = factorial(n);
			printf("Factorial of %d is %d\n",n,fact);
			break;
		case 5:
			printf("Enter n : ");
			scanf("%d",&n);
			fact = factorial_rec(n);
			printf("Factorial of %d is %d\n",n,fact);
			break;
		default:
			printf("Invalid choice!\n");
	}

	return 0;
}
