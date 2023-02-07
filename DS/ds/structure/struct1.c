#include<stdio.h>
struct student
{
    int rollno;
    char sectn;
    float percentage;
};
int main(){
    struct student s={985,'B',98.28};
    printf("%d ",s.rollno);
    printf("%c ",s.sectn);
    printf("%f ",s.percentage);
    return 0;
}
