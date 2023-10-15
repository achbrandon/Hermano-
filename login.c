#include <stdio.h>

int  main () {
    int num1, num2; 
    printf("Enter num1:");
    scanf("%d", &num1);

    printf("Enter num2:");
    scanf("%d", &num2);
    
    if (num1 == 20 || num2 == 78) {
       printf("you have access");
    }
  else {
         printf("you don not have access"); 
    }
 
return  0;
}