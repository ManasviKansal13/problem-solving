/*5. Write a program to add two complex numbers using structure. 
The values of the complex number is to be taken from the user.
*/
#include<stdio.h>
struct complex
{
    int real;
    int compl;
};
int main(){
    struct complex c[2];
    for (int i=0;i<2; i++)
    {
        scanf("%d",&c[i].real);
        scanf("%d",&c[i].compl);  
    }
    struct complex c3;
    c3.real=c[0].real+ c[1].real;
    c3.compl=c[0].compl+ c[1].compl;
    printf("%d+%di",c3.real,c3.compl);
    return 0;
}
