#include<stdio.h>
struct student
{
    int rollno;
    int sectn;
    int percentage;
};
int main(){
    struct student s[3];
    for (int i=0;i<=2; i++)
    {
          scanf("%d",&s[i].rollno);
          scanf("%d",&s[i].sectn);
          scanf("%d",&s[i].percentage);  
    }
    for (int i=0;i<=2; i++){
      printf("%d ",s[i].rollno);
      //fflush(stdin);
      printf("%d ",s[i].sectn);
      printf("%d ",s[i].percentage);
      printf("\n");
    }
    return 0;
}
