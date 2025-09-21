#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a;
    int b;

    printf("Enter the numerator : ");
    scanf("%d", &a);

    printf("Enter the denominator : ");
    scanf("%d", &b); 
    
    printf("The result of the division is %f.\n" ,(float)a/b);


    system("pause");
    return 0;
   
}
 
 
