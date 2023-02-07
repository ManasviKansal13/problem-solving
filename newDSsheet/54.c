#include<stdio.h>
struct student{
    char *name;
    int roll_no;
    char section;
    char *address;
    float percentage;
    long mobile_no;
};
int main(){
    struct student s[15];
    printf("Enter the details: \n");
    for(int i=0;i<15;i++){
        s[i].name = malloc(1024*sizeof(char));
        scanf("%s",s[i].name);
        scanf("%d",&s[i].roll_no);
        scanf("%c",&s[i].section);
        s[i].address = malloc(1024*sizeof(char));
        scanf("%s",s[i].address);
        scanf("%f",&s[i].percentage);
        scanf("%ld",&s[i].mobile_no);
    }
    for(int i=0;i<15;i++){
        printf("%s\t",s[i].name);
        printf("%d\t",s[i].roll_no);
        printf("%c\t",s[i].section);
        printf("%s\t",s[i].address);
        printf("%f\t",s[i].percentage);
        printf("%ld",s[i].mobile_no);
        printf("\n");
    }
    return 0;
}