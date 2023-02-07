#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
    struct node *father;
    int height;
};
struct node *makenode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;   
    p->left=NULL;
    p->right=NULL;
    p->father=NULL;
    p->height=0;
    return p;
}
void inorder(struct node **p){
    if((*p)!=NULL){
        inorder(&((*p)->left));
        printf("%d\t",(*p)->data);
        inorder(&((*p)->right));
    }
}
int maximum(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}
int height(struct node *p){
    int hl,hr;
    if(p==NULL)
        return 0;
    if(p->left==NULL)
        hl=0;
    else
        hl=1+p->left->height;
    if(p->right==NULL)
        hr=0;
    else
        hr=1+p->right->height;
    return maximum(hl,hr);
}
struct node *BSTInsertionrec(struct node **p,int x){
    if((*p)==NULL)
        *p=makenode(x);
    else{
        if(x<(*p)->data)
            (*p)->left=BSTInsertionrec(&((*p)->left),x);
        else
            (*p)->right=BSTInsertionrec(&((*p)->right),x);
        (*p)->height=height(*p);
        return *p;
    }
}
/*
vrooo... 
*/