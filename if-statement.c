#include <stdio.h>
int main () 
{
    int yob;
    int age;

    printf("Enter your yob:");
    scanf ("%d", &yob);
    age =  2023 - yob;
    if(age<=18) {
        printf("you are not elegible to this platform");
    }

        else {
            printf("success!! are elegible to the platform ");
        }
        return 0;
    
        
    
}