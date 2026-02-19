#include <stdio.h>
int main(){
        char str1[100];
        char str2[100];
        printf("Enter the string(1) : ");
        scanf("%s", str1);
	printf("Enter the string(2) : ");
        scanf("%s", str2);
        int i = 0;
	char temp[100];
        while(str1[i]!=0){
                temp[i] = str1[i];
                i++;
        }
	temp[i] = 0;
	i = 0;
        while(str2[i]!=0){
                str1[i] = str2[i];
                i++;
        }
	str1[i] = 0;
	i = 0;
	while(temp[i]!=0){
                str2[i] = temp[i];
                i++;
        }
	str2[i] = 0;
	printf("String(1) : %s\n",str1);
	printf("String(2) : %s\n",str2);
        return 0;
}

