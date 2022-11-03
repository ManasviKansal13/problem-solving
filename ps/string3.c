//prefixess or substrings
/*
#include<stdio.h>
#include<string.h>
int main(){
    char abc[20];
    gets(abc);
    int i=0;
    while (abc[i]!='\0')
    {
        i=i+1;
    }
    printf("%d \n",i);
    for(int i=0;i<=20;i++){
        for(int j=0;j<i;j++){
            printf("%c",abc[j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*******************/

#include<stdio.h>
#include<string.h>
int main(){
    char abc[10];
    int i=0;
    gets(abc);
    while(abc[i]!='\0')
    {
        i++;
    }
    for(int j=0;j<i;j++)
    {
        for(int k=0;k<j;k++)
        printf("%c",abc[k]);
        printf("\n");
        return 0;
    }
}
