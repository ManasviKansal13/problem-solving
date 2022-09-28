#include<stdio.h>
#include<stdbool.h>

bool isLeapYear(int year){
    return year%4==0 && year%100!=0 || year%400==0;
}

int countleap( int x)
    {
        int ly=0 ;
        for( int i=4;i<=x;i=i+4){
            if(isLeapYear(i))
              ly++;
        }
        return ly;
    }
//weekday of date
int main()
{
    int dd,mm,yyyy,ly,m,md,T,D ;
    printf("Enter the date, month & year: ");
    scanf("%d%d%d",&dd,&mm,&yyyy);
    // reference date is 01.01.0001
    ly=countleap(yyyy-1);
    int  A[13]=  {0,31,28,31,30,31,30,31,31,30,31,30,31};
    m=mm-1;
    md=0;
    for( int i=1;i<=m;i++){
        md=md+A[i];
    }
    if(mm>2){
        if(isLeapYear(yyyy)) {
            md=md+1;
        }
    }
    T=(yyyy-1)*365+ly+md+dd-1;
    D=T%7;
    if(D==0){
        printf("Monday");
    }
    else if(D==1){
        printf("Tuesday");
    }
    else if(D==2){
        printf("Wednesday");
    }
    else if(D==3){
        printf("Thrusday");
    }
    else if(D==4){
        printf("Friday");
    }
    else if(D==5){
        printf("Saturday");
    }
    else{
        printf("Sunday");
    }
    return 0;


}  