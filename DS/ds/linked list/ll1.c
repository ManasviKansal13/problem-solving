//primitive operations of linked list
//insBeg,Insaft,Instend,Delbeg,Delaft,Delend,Rev...
#include <stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *Next;
}; 
/******************************/
struct node* GetNode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
/******************************/
void InsBeg(struct node **START,int x){
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Next=*START;
    *START=p;
}
/******************************/
void InsAft(struct node **p,int x){
    struct node *q;
    q=GetNode();
    q->info=x;
    q->Next=(*p)->Next;
    (*p)->Next=q;
}
/******************************/
void InsEnd(struct node **START,int x){
    struct node *q,*p;
    q=*START;
    if(q==NULL)
        InsBeg(&START,x);
    else{
        while(q->Next!=NULL)
            q=q->Next;
        p=GetNode();
        p->info=x;
        p->Next=NULL;
        q->Next=p;
    }
}
/******************************/
int DelBeg(struct node **START){
    struct node *p;
    int x;
    p=(*START);
    (*START)=(*START)->Next;
    x=p->info;
    free(p);
    return x;
}
/******************************/
int DelAft(struct node **p){
    int x;
    struct node *q;
    q=(*p)->Next;
    (*p)->Next=q->Next;
    x=q->info;
    free(q);
    return x;
}
/******************************/
int DelEnd(struct node **START){
    int x;
    struct node *q, *p;
    p=(*START);
    q=NULL;
    while(p->next!=NULL){
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;
}
/******************************/
void Traverse(struct node **START){
    struct node *p;
    p=*START;
    while(p!=NULL){
        printf("%d\t",p->info);
        p=p->Next;
    }
}
/******************************/
struct node *reverse(struct node **START){
    struct node *p,*n,*c;
    c=*START;
    p=NULL;
    n=c->Next;
    while (c!=NULL){
        c->Next=p;
        p=c;
        c=n;
        if (n!=NULL)
            n=n->Next;
    }
    *START=p;
    return *START;
}
/******************************/
int main(){
    struct Node **START;
    START=NULL;
    InsBeg(&START,100);
    InsBeg(&START,200);
    InsBeg(&START,300);
    Traverse(&START);
    InsEnd(&START,10);
    Traverse(&START);
    return 0;
}

//count of nodes
//count of even odd nodes
//sorting 