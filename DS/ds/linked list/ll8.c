//odd nd even
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
/**************************/
void insbeg(int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=start;
    start=p;
}
/**************************/ 
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
/**************************/
void traverse(){
    struct node *p;
    p=start;
    int counteven=0;
    int countodd=0;
    while(p!=NULL){
        printf(" %d",p->info);
        if( (p->info) % 2==0)
            counteven++;
        else
            countodd++;
        p=p->next;
    }
    printf("\nnumber of even & odd nodes are %d & %d",counteven,countodd);
}
/**************************/
int main(){
    start=NULL;
    insbeg(100);
    insbeg(200);
    insbeg(300);
    insbeg(400);
    insbeg(500);
    insend(10);
    insend(20);
    insend(3);
    insend(40);
    insend(5);
    traverse();
    return 0;
}