#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,res;
    char operator;
    scanf("%d %d\n",&a,&b);
    scanf("%c",&operator);
    if(operator=='+')
        printf("%d",a+b);
    else if(operator=='-')
        printf("%d",a-b);
    else if(operator=='*')
        printf("%d",a*b);
    else if(operator=='/')
        printf("%d",a/b);
    else if(operator=='%')
        printf("%d",a%b);
    else
        printf("Invalid Choice");
    return 0;
}