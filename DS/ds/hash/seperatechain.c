#include<stdio.h>
#include"header file/LinkedList.h"
int main(){
    struct Node *arr_LL[6];
    for(int i=0;i<6;i++){
        arr_LL[i]=NULL;
    }
    int arr[10]={10,11,12,14,23,28,29,34,52,57};
    for(int i=0;i<10;i++)
        InsEnd(&arr_LL[arr[i]%6],arr[i]);
    for(int i=0;i<6;i++){
        Traverse(&arr_LL[i]);
        printf("\n");
    }
}