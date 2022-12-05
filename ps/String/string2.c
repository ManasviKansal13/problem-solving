//concatinating
#include<stdio.h>
#include<string.h>
int main(){
    char new1[20];
    char new2[20];
    int i=0,j=0;
    gets(new1);
    gets(new2);
    while (new1[i]!='\0'){
        i++;
    }
    while (new2[j]!='\0'){
        new1[i]=new2[j];
        i++;
        j++;
    }   
    new1[i]='\0';
    puts(new1);
    return 0;
}