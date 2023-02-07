// count of nodes wala
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
/**************************/
struct node *start;
/**************************/
struct node *getnode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
/****************************/
void InsBeg(int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=start;
    start=p;
}
/****************************/
void InsEnd(int x){
    struct node *p;
    struct node *q;
    q=start;
    while(q->next!=NULL)
        q=q->next;
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;   
}
/*************************/
void Traverse(){
    struct node *p;
    p=start;
    int count=0;
    while(p!=NULL){
        printf("%d ",p->info);
        p=p->next;
        count++;
    }
    printf("\nnumber of nodes are:");
    printf(" %d",count);
}
/********************************/
int main(){
    start=NULL;
    InsBeg(100);
    InsBeg(200);
    InsBeg(300);
    InsBeg(400);
    InsBeg(500);
    InsEnd(10);
    InsEnd(20);
    InsEnd(30);
    InsEnd(40);
    InsEnd(50);
    Traverse();
    return 0;
}