#include<stdio.h>
// triangle equi, isoscele, scalar
int main(){
    int a,b,c;
    printf("Enter the sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
        printf("Equilateral");
    else if(a==b || b==c || a==c)
        printf("Isoscele");
    else
        printf("Scalar");
    return 0;
}