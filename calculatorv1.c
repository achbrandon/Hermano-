#include <stdio.h> 
int main () {
    float num1, num2, result;
    char operator;

    printf("Enter first number:");
    scanf("%f", &num1);

    printf("Enter second number:");
    scanf("%f", &num2); 

    getchar();

    printf("Enter operator (+ - * /)" );
    scanf("%c", &operator);

    if (operator == '+') {
        result = num1 + num2;
        printf("the sum of %f and %f is :%f", num1, num2, result);  
    
    }
    else if (operator == '-') {
        result = num1 - num2; 
        printf("the subtraction between %f and %f,is :%f ", num1, num2, result);
    }
    else if (operator == '/') {
        if (num2 == 0){
            printf("devision by zero Eror");
        }
        else{
             result  = num1 / num2;
            printf("the devision between %f and %f is:%f", num1, num2,result);

        }
        
    }
    else if (operator == '*'){
        result = num1 * num2;
        printf("the multiplication  result between %f and %f is:%f", num1, num2, result);
    }
    else  {
        printf("result is invalid");

    }
      
        
    return 0;
}