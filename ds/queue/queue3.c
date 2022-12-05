//circular queue
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
struct Queue CQ;
/********************/
void intialize(struct Queue *CQ){
    CQ->front=QUEUESIZE-1;
    CQ->rear=QUEUESIZE-1;
}
/********************/
int isempty(struct Queue *CQ){
    if (CQ->rear==CQ->front)
        return TRUE;
    else
        return FALSE; 
}
/********************/
void enqueue(struct Queue *CQ,int x){
    //ifempty wala condition hai toh overflow condition hai
    if ((CQ->rear+1)%QUEUESIZE==CQ->front){
        printf("\nQueue overflows");
        exit(1);
    }
    CQ->rear=(CQ->rear+1)%QUEUESIZE;
    CQ->item[CQ->rear]=x;   
}
/********************/
int dequeue(struct Queue *CQ,int x){
    
    if(isempty(CQ)){
        printf("\nQueue underflows");
        exit(1);
    }
    CQ->front=(CQ->front+1)%QUEUESIZE;
    x=CQ->item[CQ->front];
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
    intialize(&fQ);
    enqueue(&fQ,100);
    enqueue(&fQ,200);
    enqueue(&fQ,300);
    enqueue(&fQ,400);
    enqueue(&fQ,500);
    enqueue(&fQ,600);
    enqueue(&fQ,700);
    enqueue(&fQ,800);
    //enqueue(&fQ,900);
    //enqueue(&fQ,1000);
    //enqueue(&fQ,1100);
    
    printf("deleted element is %d",x);
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
    x=dequeue(&fQ,0);
    printf("\ndeleted element is %d",x);
    x=dequeue(&fQ,0);
    printf("\ndeleted element is %d",x);
    x=dequeue(&fQ,0);
    printf("\ndeleted element is %d",x);
    x=dequeue(&fQ,0);
    //printf("\ndeleted element is %d",x);
    //x=dequeue(&fQ,0);
    //printf("\ndeleted element is %d",x);
    //x=dequeue(&fQ,0);
    //printf("\ndeleted element is %d",x);
    //x=dequeue(&fQ,0);
    //printf("\ndeleted element is %d",x);
    //x=dequeue(&fQ,0);
    return 0;
}