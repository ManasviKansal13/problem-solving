//cycle  hai yah nhi hai
//cycle size
//cycle starting element 0 

#include <stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *Next;
}; 
struct node *START;
struct node* GetNode(){    
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node** START,int x){
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Next=*START;
    *START=p;
}
void InsEnd(struct node** START,int x){
    struct node *q,*p;
    q=*START;
    while(q->Next!=NULL)
        q=q->Next;
    p=GetNode();
    p->info=x;
    p->Next=NULL;
    q->Next=p;
}
void Traverse(struct node **START){
    struct node *p,*q;
    p=*START;
    while(p->Next!=NULL)
        p=p->Next;
    q=*START;
    while(q->info!=400)
        q=q->Next;
    p->Next=q;
}
void cycledetect(struct node **START){
    struct node *t,*r;
    t=*START;
    r =*START;
    int c=0;
    while(r!=NULL && r->Next!=NULL){
        t=t->Next;
        r=r->Next;
        r=r->Next;
        if(t==r){
            c++;
            break;
        }
    }
    if(c>0)
        printf("cycle");
    else
        printf("Not cycle");
}
int  middle(struct node **START){
    struct node *t,*r;
    t=*START;
    r =*START;
    int c=0;
    while(r!=NULL && r->Next!=NULL){
        t=t->Next;
        r=r->Next;
        r=r->Next;
    }
    printf("%d",t->info);
}
struct node *concant(struct node **START2,struct node **START3){
    if(*START2==NULL)
        return *START3;
    else{
        struct node *p;
        p=*START2;
        while(p->Next!=NULL)
            p=p->Next;
        p->Next=*START3;
        return *START2; 
    }
}
void Traver(struct node **START){
  struct node *p;
  p=START;
  while(p!=NULL){
        printf("%d ",p->info);
        p=p->Next;
    }
}
int main(){
    struct node *START,*START2,*START3,*a;
    START=NULL;
    START2=NULL;
    START3=NULL;
    InsBeg(&START,100);
    InsBeg(&START,200);
    InsBeg(&START,300);
    InsBeg(&START,400);
    InsBeg(&START,500);
    InsEnd(&START,900);
    InsBeg(&START,600);
    InsEnd(&START,700);
    Traver(&START);
    Traverse(&START);
    cycledetect(&START);
    printf("\n\n");
    //middle(&START);
    InsBeg(&START2,100);
    InsBeg(&START2,200);
    InsBeg(&START2,300);
    InsBeg(&START2,400);
    InsBeg(&START3,500);
    InsBeg(&START3,900);
    InsBeg(&START3,600);
    InsBeg(&START3,700);
    Traver(concant(&START2,&START3));
    // Traver(&START3);
    // printf("\n\n");
    // Traver(&START2);
    // printf("\n\n");
    // Traver(&START2);
}