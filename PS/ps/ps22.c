/*
Aarzoo works as an employee in the XYZ corporation. She has an account on their portal where she gets all the notifications and 
salary slips. The company has certain norms by which the salary breakup of an employee is displayed on their profile. 
Every month Aarzoo cross checks the salary through the given parameters. The company uses the following HRA and DA percentages:

• If the Basic Salary is less than or equal to 10000 then HRA = 8% of the basic, and DA = 10% of the basic;

• If Basic Salary is less than or equal to 20000 and greater than 10000 then HRA = 16% and DA = 20%;

• If Basic Salary is greater than 20000 then HRA = 24% and DA = 30%.

Now, help Aarzoo to calculate her final salary by writing a program in C language.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    float basic,HRA,DA,salary;
    scanf("%f",&basic);
    if(basic<=10000){
        HRA=0.08*basic;
        DA=0.1*basic;
    }  
    else if(basic<=20000 && basic>10000){
        HRA=0.16*basic;
        DA=0.2*basic;
    } 
    else{
        HRA=0.24*basic;
        DA=0.3*basic;
    }
    salary=basic+HRA+DA;
    printf("%0.2f",salary);
    return 0;
}