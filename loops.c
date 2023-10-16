#include <stdio.h>
int main (void) {
    // int i; 
    // for (i=1; i<=10; i++) {
    //     printf("%d\n", i);
    // }
    int i;
    int n;
    char name[25];
    printf("enter the amount of time you want your name too be display: ");
    scanf("%d", &n);
    printf("my name is : ");
    scanf ("%s",name);
    for (i=1; i<=n; i++){
        printf("your name is %s\n", name );
        
    }
    return  0;

}
// (for innitializing statement, test expression, increment value) {

// boody of the loops"

