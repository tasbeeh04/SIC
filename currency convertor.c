#include <stdio.h>

int main(){
    float currency;
printf("enter money value in USD \n");
// user enter the value of money
scanf("%f" , &currency);
//currency conversion
float conversion = (currency*16);
printf("%.2f USD = %.2f EGP", currency, conversion);
}
