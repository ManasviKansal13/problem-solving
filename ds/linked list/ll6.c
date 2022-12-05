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
void insbeg(int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=start;
    start=p;
}
/****************************/
void insend(int x){
    struct node *p;
    struct node *q;
    q=start;
    while(q->next!=NULL){
        q=q->next;
    }
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;   
}
/*************************/
void traverse(){
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
    insbeg(100);
    insbeg(200);
    insbeg(300);
    insbeg(400);
    insbeg(500);
    insend(10);
    insend(20);
    insend(30);
    insend(40);
    insend(50);
    traverse();
    return 0;
}