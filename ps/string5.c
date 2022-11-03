#include<stdio.h>
#include<string.h>
int DAT[26];
int main(){
    char new[100];
    int i=0;
    gets(new);
    while(new[i]!='\0'){
        DAT[new[i]-'a']++;
        i++;
    }
    for(i=0;i<26;i++){
        if(DAT[i]!=0){
            printf("%c",'a'+i);
            printf("%d",i);
        }
    }
    return 0;
}