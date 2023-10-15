#include<stdio.h>
int main (){
    float num1;
    float num2;
    float answer; 
    
    printf("Enter num1:");
    scanf("%f",&num1);
    
    printf("Enter  num2:");
    scanf("%f",&num2);
    
    answer = num1 - num2;
    printf ("the answer to  this is %f",answer);
    return 0;
}