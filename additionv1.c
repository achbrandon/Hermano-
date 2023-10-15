#include <stdio.h>
int main(void) {
    //declaring a variable 

float num1; // float:for decimals  when dealing with  mathematical calculation 
float num2;
float answer;

//getting inputs from user 
printf("Enter num1:");
scanf("%f", &num1);
printf("\n");

printf("Enter num2:");
scanf("%f", &num2);

//performing addition 
answer = num1 + num2;

//displaying result
printf("the answer of the result is  %f",  answer);

return 0; 
}