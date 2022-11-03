/*
11. Write a program to compare two dates entered by user.
 Make a structure named Date to store the elements day, month and year to store the dates.
 If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/
#include<stdio.h>
struct Date
{
    int date;
    int month;
    int year;
};
int main(){
    struct Date D[3];
    for (int i=0;i<2; i++)
    {
          scanf("%d",&D[i].date);
          scanf("%d",&D[i].month);
          scanf("%d",&D[i].year);  
    }
    for (int i=0;i<2; i++){
      printf("%d/%d/%d ",D[i].date,D[i].month,D[i].year);
      printf("\n");
    }
    if (D.date[0]==D.date[1] && D.month[0]==D.month[1] && D.year[0]==D.year[1])
    {
        printf("Dates are equal");
    }
    else
    {
        printf("Dates are not equal");
    }
    return 0;
}