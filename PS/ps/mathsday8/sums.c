//sum of digits of the number
#include<stdio.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    while(sum<10){
        sum=num%10;
        //printf("%d",sum);
        sum++;
        //printf("%d",sum);
    }
    printf("\n%d",sum);
    return 0;
}