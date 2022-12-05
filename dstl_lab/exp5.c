// and or not implementatn
#include<stdio.h>
int main(){
    int a,b,c,Res1,Res2,Res3;
    printf("Enter the values of a & b in binary: ");
    scanf("%d %d",&a,&b);
    if(a==0 && b==0||a==0 && b==1||a==1 && b==0)
        Res1=0;
    else
        Res1=1;
    if(a==1 && b==1||a==0 && b==1||a==1 && b==0)
        Res2=1;
    else
        Res2=0;
    printf("Enter the value of c in binary: ");
    scanf("%d",&c);
    if(c==0)
        Res3=1;
    else
        Res3=0;
        printf("The result of AND of a & b is: %d",Res1);
        printf("\nThe result of OR of a & b is: %d",Res2);
        printf("\nThe result of NOT of c is: %d",Res3);
    return 0;
    
}