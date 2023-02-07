//Run till user saysss
#include<stdio.h>
#include<stdlib.h>
#define QUEUESIZE 10
#define TRUE 1
#define FALSE 0
struct Queue{
    int front,rear;
    int item[QUEUESIZE];
};
/*********************/
struct Queue Q;
/********************/
void intialize(struct Queue *Q){
    Q->front=0;
    Q->rear=-1;
}
/********************/
int isempty(struct Queue *Q){
    if (Q->rear-Q->front+1==0)
        return TRUE;
    else
        return FALSE; 
}
/********************/
void enqueue(struct Queue *Q,int x){
    
    if (Q->rear==QUEUESIZE-1){
        printf("\nQueue overflows");
        exit(1);
    }
    Q->rear=Q->rear+1;
    Q->item[Q->rear]=x;   
}
/********************/
int dequeue(struct Queue *Q,int x){
    
    if(isempty(Q)){
        printf("\nQueue underflows");
        exit(1);
    }
    x=Q->item[Q->front];
    Q->front=Q->front+1;
    return x;
}
/********************/
/*
int stacktop(int x){
    x=s.item[s.top];
    return x;
}*/
/********************/
int main(){
    struct Queue fQ;
    int x;
    int A[QUEUESIZE];
    printf("Enter the elements in the queue: ");
    intialize(&fQ);
    for(int i=0;i<QUEUESIZE;i++){
        scanf("%d",A[i]);
        enqueue(A[i]);
    }
    for(int i=0;i<QUEUESIZE;i++){
        printf();
    }
    x=dequeue(&fQ,0);
    printf("deleted element is %d",x);
    x=dequeue(&fQ,0);
    printf("\ndeleted element is %d",x);
    x=dequeue(&fQ,0);
    printf("\ndeleted element is %d",x);
    x=dequeue(&fQ,0);
    printf("\ndeleted element is %d",x);
    x=dequeue(&fQ,0);
    printf("\ndeleted element is %d",x);
    return 0;
}