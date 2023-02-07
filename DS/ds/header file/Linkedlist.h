#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node *Next;
};
struct Node *GetNode(){
    struct Node *p;
    p=(struct Node*)malloc(sizeof(struct Node));
    return p;
};
void Traverse(struct Node **START){
    struct Node *p;
    p=*START;
    while(p!=NULL){
        printf("%d ",p->info);
        p=p->Next;
    }
}
int CountNode(struct Node **START){
    int c=0;
    struct Node *q;
    q=(*START);
    while(q!=NULL){
        c++;
        q=q->Next;
    }
    return c;
}
void InsBeg(struct Node **START,int x){
    struct Node *p;
    p=GetNode();
    p->info=x;
    p->Next=(*START);
    (*START)=p;
}
void InsAft(struct Node **q,int x){
    struct Node *p,*r;
    p=GetNode();
    p->info=x;
    r=(*q)->Next;
    p->Next=r;
    (*q)->Next=p;
}
void InsEnd(struct Node **START,int x){
    struct Node *q,*p;
    q=(*START);
    if(q==NULL){
        InsBeg(START,x);
    }
    else{
        while(q->Next!=NULL){
            q=q->Next;
        }
        p=GetNode();
        p->info=x;
        p->Next=NULL;
        q->Next=p;
    }
}
void Insert(struct Node **START,int x,int n){
    int a = CountNode(START);
    if(n==1) InsBeg(START,x);
    else if(n==a+1) InsEnd(START,x);
    else if(n>1 && n<=a){
        struct Node *p;
        p=*START;
        for(int i=0;i<n-1;i++){
            p=p->Next;
        }
        InsAft(&p,x);
    }
    else printf("Invalid Index");
}
void OrderedInsertion(struct Node **START,int x){
    struct Node *p,*q;
    p=*START;
    q=NULL;
    while(p!=NULL && x>p->info){
        q=p;
        p=p->Next;
    }
    if(q==NULL){
        InsBeg(START,x);
    }
    else InsAft(&q,x);
}
void PQInsertion(struct Node **START,int x){
    OrderedInsertion(START,x);
}

int DelBeg(struct Node **START){
    int x;
    struct Node *p;
    p=*START;
    x=p->info;
    *START=(*START)->Next;
    free(p);
    return x;
}
int DelEnd(struct Node **START){
    int x;
    struct Node *p,*q;
    p=*START;
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
int DelAft(struct Node **p){
    int x;
    struct Node *q,*r;
    q=(*p)->Next;
    r=q->Next;
    (*p)->Next=r;
    x=q->info;
    free(p);
    return x;
}
int PQdel(struct Node **START){
    int x = DelBeg(START);
}
struct Node* middleElement(struct Node **START){
    struct Node *T,*R;
    T=*START;
    R=(*START)->Next;
    while(R!=NULL && R->Next!=NULL){
        T=T->Next;
        R=R->Next;
        R=R->Next;
    }
    return T;
}