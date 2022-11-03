#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char num;
    scanf("%c",&num);

    if(48<= num && num <=57){
        printf("\"Number\"");
    }
    else if(65<= num && num <=90){
        printf("\"Uppercase\"");
    }
    else if(97<= num && num <=122){
        printf("\"Lowercase\"");
    }
    else{
        printf("\"SpecialCharacter\"");
    }
    return 0;
}