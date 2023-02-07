/*
Rashi is a B.Tech fresher and is placed in Accenture. She got her first pay cheque and has submitted it in the bank. 
She is curious to know how much interest is being applied on her principal amount. 
Therefore, she decides to calculate the interest by writing a code in C language.
Once she knows how much interest she is getting on the amount submitted to the bank, she decides to motivate her friends to do the same.
Help Rashi to code a generalised program in C language for the calculation of the interest.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float principle,rate,tym,si,ci;
    scanf("%f %f %f",&principle,&rate,&tym);
    si=(principle*tym*rate)/100;
    ci=principle*(pow((1+(rate/100)),tym))-principle;
    printf("%0.2f %0.2f",si,ci);   
    return 0;
}