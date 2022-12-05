//nature of roots
//roots of eqn
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D,X,Y;
    
    printf("Enter the values of a, b & c: ");
    scanf("%d %d %d",&a,&b,&c);
    D=((b*b)-(4*a*c));
    if(D>0)
        printf("The roots are real & distinct. ");
    else if(D=0)
        printf("The roots are real & equal. ");
    else
        printf("The roots are Imaginary. ");
    X=(-b+sqrt(D))/(2*a);
    Y=(-b-sqrt(D))/(2*a);
    printf("The roots of the equation are %d & %d",X,Y);
    return 0;
}