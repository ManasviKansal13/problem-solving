//structure storing rollno wgry wgrh of user defined students of a cllss
#include<stdio.h>
#include<stdlib.h>
/*
struct Student{
    int Rollno;
    char Name[20];
    double Percnt;
};
int main(){
    struct Student s;
    scanf("%d %s %lf",&s.Rollno,s.Name,&s.Percnt);
    printf("%d %s %lf",s.Rollno,s.Name,s.Percnt);
    return 0;
}
*/
/*
struct Student{
    int Rollno;
    char Name[20];
    double Percnt;
};
int main(){
    struct Student *s;
    s=(struct Student *)malloc(1*sizeof(struct Student));
    scanf("%d %s %lf",&s->Rollno,s->Name,&s->Percnt);
    printf("%d %s %lf",s->Rollno,s->Name,s->Percnt);
    return 0;
}
*/
struct Student{
    int Rollno;
    char Name[20];
    double percent;
};
void input(int n,struct Student *s){
    for(int i=0;i<n;i++)
        scanf("%d %s %lf",&(s+i)->Rollno,(s+i)->Name,&(s+i)->percent);
}
void output(int n,struct Student *s){
    for(int i=0;i<n;i++)
        printf("%d %s %lf\n",(s+i)->Rollno,(s+i)->Name,(s+i)->percent);
}
int main(){
    int n;
    struct Student *s;
    printf("Enter the input number of students: ");
    scanf("%d",&n);
    s=(struct Student *)malloc(n*sizeof(struct Student));
    printf("Enter the details of students: \n");
    input(n,s);
    printf("The details of students are as follows: \n");
    output(n,s);
    return 0;
}


