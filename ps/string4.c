//suffixess
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