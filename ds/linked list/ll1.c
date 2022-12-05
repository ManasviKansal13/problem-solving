#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node *Next;
};
/**************************/
struct Node *START;
/**************************/
struct Node* GetNode(){
    struct Node *P;
    P=(struct Node*)malloc(sizeof(struct Node));
    return P;
}
/**************************/
 void InsBeg(int x){
    struct Node *P;
    P=GetNode();
    P->info=x;
    P->Next=START;
    START=P;
}
/**************************/
void InsEnd(int x){
    struct Node *P;
    struct Node *Q;
    Q=START;
    while (Q->Next!=NULL){
        Q=Q->Next;
    }
    P=GetNode();
    P->info=x;
    P->Next=NULL;
    Q->Next=P;   
}
/**************************/
int Traverse(){
    struct Node *P;
    P=START;
    while (P!=NULL){
        printf("%d\t",P->info);
        P=P->Next;
    }
}
/**************************/
int main(){
    START=NULL;
    InsBeg(100);
    //printf("\t");
    InsBeg(200);
    //printf("\t");
    InsBeg(300);
    //printf("\t");
    Traverse();
    //printf("\t");
    InsEnd(10);
    Traverse();
    return 0;
}

//count of nodes
//count of even odd nodes
//sorting 