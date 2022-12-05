//delete the kth node from end
//2 pointer approach...
#include <stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *Next;
}; 
struct node* GetNode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node **START,int x){
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Next=*START;
    *START=p;
}
void InsAft(struct node **p,int x){
    struct node *q;
    q=GetNode();
    q->info=x;
    q->Next=(*p)->Next;
    (*p)->Next=q;
}
void InsEnd(struct node **START,int x){
    struct node *q,*p;
    q=*START;
    if(q==NULL)
        InsBeg(START,x);
    else{
        while(q->Next!=NULL)
            q=q->Next;
        p=GetNode();
        p->info=x;
        p->Next=NULL;
        q->Next=p;
    }
}
int DelBeg(struct node **start){
    int x;
    struct node *p;
    p=*start;
    x=p->info;
    (*start)=(*start)->Next;
    free(p);
    return x;
}
int DelAft(struct node **p){
    int x;
    struct node *q;
    q=(*p)->Next;
    (*p)->Next=q->Next;
    x=q->info;
    free(q);
    return x;
}
int DelEnd(struct node **start){
    int x;
    struct node *q, *p;
    p=(*start);
    q=NULL;
    while(p->Next!=NULL){
        q=p;
        p=p->Next;
    }
    q->Next=NULL;
    x=p->info;
    free(p);
    return x;
}
void Traverse(struct node **START){
    struct node *p;
    p=*START;
    while(p!=NULL){
        printf("%d\t",p->info);
        p=p->Next;
    }
}
struct node *Rev(struct node **START){
    struct node *p,*n,*c;
    c=*START;
    p=NULL;
    n=c->Next;
    while(c!=NULL){
        c->Next=p;
        p=c;
        c=n;
        if(n!=NULL)
            n=n->Next;
    }
    *START=p;
    return *START;
}
void DelKNode(struct node **START,int k){
    struct node *p,*q;
    p=*START;
    int i=1;
    while(i<=k){
        i=i+1;
        if(p!=NULL)
            p=p->Next;
        else{
            printf("Void Deletion");
            exit(1);
        }
        q=*START;
    }
    if(p!=NULL){
        while(p->Next!=NULL){
            q=q->Next;
            p=p->Next;
        }
        DelAft(&q);
    }
    else
        DelBeg(START);
}
int main(){
    struct node **START;
    START=NULL;
    InsBeg(&START,100);
    InsBeg(&START,200);
    InsBeg(&START,300);
    Traverse();
    DelKNode()
    return 0;
}