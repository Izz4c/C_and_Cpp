#include <stdio.h>
#include <math.h>

//Isahac 25021190

void EOQ_TBO(){
    double DR          , SC        , HCPIPUT;
          //demand rate, setup cost, holding cost per item per unit time
    printf("Demand rate : ")                        ;  scanf("%lf",&DR);
    printf("Setup Cost : ")                         ;  scanf("%lf",&SC);
    printf("Holding cost per item per unit time : ");  scanf("%lf",&HCPIPUT);


    double EOQ = sqrt((2*DR*SC)/HCPIPUT);
    double TBO = sqrt(2*SC/(DR*HCPIPUT));

    printf("Economic order quality : %lf\n", EOQ);
    printf("Time between orders : %lf\n", TBO);
}

void SUM_DIGITS(){
    int num; printf("Enter num : "); scanf("%d", &num);
    int dig1 = (num/10);
    int dig2 = num%10;
    int sum = dig1+dig2;

    printf("Sum : %d\n",sum);
}

void TWO_SWAP(){
    int a,b; printf("Enter a,b : ");scanf("%d,%d",&a,&b);
    int temp = b;
    b = a;
    a = temp;
    printf("A : %d, B : %d\n",a, b);

}
void CEL_TO_FAH(){
    double celcius;
    printf("Enter temperature in celcius : ");scanf("%lf",&celcius);

    double fahrenheit = (celcius*9/5)+32;
    printf("Temperature in fahrenheit : %lf\n",fahrenheit);
}
#define PI 3.1415926
void COMPUTE_G(){
    double l,t,g;
    printf("Enter time,length : ");scanf("%lf,%lf",&t,&l);
    g = 4*PI*PI*l/(t*t);
    printf("G = %lf\n", g);

}
int main(){
    COMPUTE_G();
    return 0;
}
