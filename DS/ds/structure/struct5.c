/*
Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. 
Find if the student is eligible for admission in Delhi University. 
A student is eligible for DU if he has scored 95 % or more in Best 4.
*/
#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[20];
    int rollno;
    float mark1; 
    float mark2;
    float mark3;
    float mark4;
    float mark5;
    float mark6;
};
int partition(int A[] ,int low, int high){
    int t;
    int mid=(low+high)/2;
    t=A[low];
    A[low]=A[mid];
    A[mid]=t;
    int i=low,j=high+1,pivot=A[low];
    do{
        do{
            i=i+1;
        }while(A[i]<pivot);
        do
        { 
            j=j-1;
        } while (A[j]>pivot); 
        if (i<j)
        {
            t=A[i];
            A[i]=A[j];
            A[j]=t;
        }     
    }while(i<j);
    t=A[j];
    A[j]=A[low];
    A[low]=t;
    return j;
    
}
/******************************/
void quicksort(int A[],int low, int high){
    int j;
    if(low<high){
        j=partition(A,low,high);
        quicksort(A,low,j-1);
        quicksort(A,j+1,high);
    }
}
int main(){
    struct student s;
    scanf("%s",&s.name);
    scanf("%d %f %f %f %f %f %f",&s.rollno,&s.mark1,&s.mark2,&s.mark3,&s.mark4,&s.mark5,&s.mark6);
    int percentage=(s.mark1+s.mark2+s.mark3+s.mark4+s.mark5+s.mark6)/6.00;

}