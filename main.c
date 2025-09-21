#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char c;
    char next;

    printf("enter a character: ");
    scanf("%c", &c);

    next = c + 1;

    printf("the next character of %c(%i) is %c(%i)\n", c, c, next, next);

    system("pause");
    return 0;
   
}
 
 
