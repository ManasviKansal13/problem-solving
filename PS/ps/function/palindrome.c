#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number,rev,temp,remainder;
    scanf("%d",&number);
    temp=number;
    while(temp>0){
        remainder=temp%10;
        rev=rev*10+remainder;
        temp=temp/10;
    }
    if(number==rev)
        printf("Yes");
    else
        printf("No");
    return 0;
}